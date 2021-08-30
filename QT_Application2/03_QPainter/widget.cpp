#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //点击移动按钮移动图片
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        pos+=20;
        //手动调用绘图事件,用update更新
        update();
    });
}
//绘图事件
void Widget::paintEvent(QPaintEvent *)
{
//    //实例化画家对象 this 指定是绘图设备
//    QPainter painter(this);
//    //设置画笔
//    QPen pen(QColor(255,0,0));
//    //设置笔的宽度
//    pen.setWidth(3);
//    //设置画笔的风格
//    pen.setStyle(Qt::DotLine);
//    //让画家使用画笔
//    painter.setPen(pen);

//    //设置画刷
//    QBrush brush(QColor(Qt::cyan));
//    //设置画刷风格
//    brush.setStyle(Qt::Dense7Pattern);
//    //让画家使用画刷
//    painter.setBrush(brush);

//    //画线
//    painter.drawLine(QPoint(0,0),QPoint(100,100));
//    //画圆
//    painter.drawEllipse(QPoint(100,100),50,50);
//    //画矩形
//    painter.drawRect(QRect(20,20,40,40));
//    //画文字
//    painter.drawText(QRect(10,200,200,200),"好好学习,天天向上");
///////////////////////////////高级设置/////////////////////////////////////////////
        //实例化画家对象 this 指定是绘图设备
//        QPainter painter(this);
//        painter.drawEllipse(QPoint(100,50),50,50);
//        //设置抗锯齿能力,效率较低
//        painter.setRenderHint(QPainter::HighQualityAntialiasing);
//        painter.drawEllipse(QPoint(200,50),50,50);

//        //画矩形
//        painter.drawRect(20,20,50,50);
//        //移动画笔的位置
//        painter.translate(100,0);
//        //保存画笔状态
//        painter.save();
//        painter.drawRect(20,20,50,50);
//        //还元画笔状态
//        painter.restore();
//        painter.drawRect(20,20,50,50);
//////////////////////////////利用painter画资源图片//////////////////////////////////
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
