#include "widget.h"
#include "ui_widget.h"
#include <QTimerEvent>
#include <QTimer>   //定时器的类
#include <QDebug>
#include <QMouseEvent>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //启动定时器第一种方式
    id1=startTimer(1000);//参数1 间隔 单位 毫秒
    id2=startTimer(2000);

    //启动定时器第二种方式
    QTimer *timer=new QTimer(this);//创建定时器的对象
    timer->start(500);

    //监听timeout信号
    connect(timer,&QTimer::timeout,[=](){
        //label_4每隔0.5s+1
        static int num3=1;
        //label_2每隔1s+1
        ui->label_4->setText(QString::number(num3++));

    });

    //点击按钮暂停
    connect(ui->btn,&QPushButton::clicked,[=](){
        timer->stop();
    });
    //点击按钮开始
    connect(ui->btn2,&QPushButton::clicked,[=](){
        timer->start();
    });



    //给label_1安装事件过滤器
    //步骤1： 安装事件过滤器
    ui->label->installEventFilter(this);

}
//步骤2： 重写事件过滤函数(比事件拦截更高级)
bool Widget::eventFilter(QObject *obj, QEvent *e)
{
    if(obj==ui->label)
    {
        if(e->type() == QEvent::MouseButtonPress)//拦截了鼠标按下操作，则上面的鼠标按下事件就不执行了
        {
            QMouseEvent * ev  = static_cast<QMouseEvent *>(e);//类型转换
            QString str = QString( "过滤器拦截中：：鼠标按下了 x = %1   y = %2  globalX = %3 globalY = %4 " ).arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
            qDebug() << str;

            return true; //true代表用户自己处理这个事件，不向下分发
        }
    }
    //其它默认处理
    return QWidget::eventFilter(obj,e);
}

//定时器第一种方式实现函数
void Widget::timerEvent(QTimerEvent *ev)
{
    if(ev->timerId()==id1)
    {
        static int num=1;
        //label_2每隔1s+1
        ui->label_2->setText(QString::number(num++));
    }
    if(ev->timerId()==id2)
    {
        //label_3每隔2s+1
        static int num2=1;
        //label_2每隔1s+1
        ui->label_3->setText(QString::number(num2++));
    }
}
Widget::~Widget()
{
    delete ui;
}
