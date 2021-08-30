#include "mywidget.h"
#include "ui_mywidget.h"
#include <QThread>//线程
#include <QDebug>
#include <QMessageBox>


//使用线程需要创建一个类，继承QThread
MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    myTimer = new QTimer(this);

    //只要定时器启动，自动触发timeout()
    connect(myTimer, &QTimer::timeout, this, &MyWidget::dealTimeout);

    //分配空间
    thread = new MyThread(this);

    //监听信号，如果线程完成了，触发处理函数
    connect(thread, &MyThread::isDone, this, &MyWidget::dealDone);

    //当按窗口右上角x时，窗口触发destroyed()
    connect(this, &MyWidget::destroyed, this, &MyWidget::stopThread);

}

void MyWidget::stopThread()
{
    //停止线程
    thread->quit();//会把手头的东西处理完后再停止
    //等待线程处理完手头动作就关闭线程
    thread->wait();
}

void MyWidget::dealDone()
{
    myTimer->stop(); //关闭定时器
    QMessageBox::information(this,"提示","记时完成");//如果把这个放在上一句话前面，会导致如果不点窗口的确定，线程会继续执行；
}

void MyWidget::dealTimeout()
{
    static int i = 0;
    i++;
    //设置lcd的值
    ui->lcdNumber->display(i);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_clicked()
{
    //如果定时器没有工作
    if(myTimer->isActive() == false)
    {
        myTimer->start(100);
    }

    //启动线程，处理数据(需要通过实例化对象来启动start函数）
    thread->start();
}
