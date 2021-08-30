#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>


MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    //动态分配空间，不能指定父对象,否则无法将它加入到子线程
    myT = new MyThread;

    //创建子线程,可以指定父对象
    thread = new QThread(this);

    //把自定义线程加入到子线程中
    myT->moveToThread(thread);

    //如果接收到线程函数中发来的信号（每隔1s），就进入处理函数
    connect(myT, &MyThread::mySignal, this, &MyWidget::dealSignal);

    qDebug() << "主线程号：" << QThread::currentThread();

    //如果发送了一个启动线程处理的信号，就调用mytimeout线程处理函数
    connect(this, &MyWidget::startThread, myT, &MyThread::myTimeout);

    //如果关闭了窗口，就调用函数关闭线程
    connect(this, &MyWidget::destroyed, this, &MyWidget::dealClose);


    //1.线程处理函数内部，不允许操作图形界面
    //2.connect()第五个参数的作用，连接方式：1.默认，2.队列，3.直接
    //3.多线程时才有意义
    //4.默认的时候
    //5.如果是多线程，默认使用队列
    //6.如果是单线程， 默认使用直接方式
    //7.队列: 槽函数所在的线程和接收者一样
    //8.直接：槽函数所在线程和发送者一样


}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::dealClose()
{
    on_buttonStop_clicked();//调用槽函数停止线程
    delete myT;
}

void MyWidget::dealSignal()
{
    static int i = 0;
    i++;
    ui->lcdNumber->display(i);
}

void MyWidget::on_buttonStart_clicked()
{

    if(thread->isRunning() == true)
    {
        return;
    }

    //启动线程，但是没有启动线程处理函数
    thread->start();
    myT->setFlag(false);//不停止

    //不能直接调用线程处理函数，
    //直接调用，导致，线程处理函数和主线程是在同一个线程
    //myT->myTimeout();

    //只能通过 signal - slot 方式调用,使其为队列连接方式，和接收者为同一个线程
    emit startThread();


}

void MyWidget::on_buttonStop_clicked()
{
    if(thread->isRunning() == false)
    {
        return;
    }
    myT->setFlag(true);//设置退出标识位为true
    thread->quit();//等待处理完线程函数中的内容再退出，然而线程函数里面是while，会一直循环，导致等待退出,必须利用标识位
    thread->wait();//做完工作后退出
}
