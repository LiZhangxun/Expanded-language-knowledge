#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QPainter>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //启动定时器第二种方式
    QTimer *timer=new QTimer(this);//创建定时器的对象
    timer->start(500);

    //监听timeout信号
    connect(timer,&QTimer::timeout,[=](){
        pos+=20;
        //手动调用绘图事件,用update更新
        update();
    });
}
//绘图事件
void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    //如果超出屏幕，pos从0开始
    if(pos>this->width())
    {
        pos=0;
    }
    painter.drawPixmap(pos,0,QPixmap(":/Image/Luffy.png"));
}
Widget::~Widget()
{
    delete ui;
}

