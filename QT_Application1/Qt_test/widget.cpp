#include "widget.h"
#include <QPushButton>
#include <QWidget>

Widget::Widget(QWidget *parent): QWidget(parent)
{
    /////////////方式一：采用两个按钮/////////////////
//    //定义一个新的Widget对象
//    QWidget* new_Widget = new QWidget;
//    //定义一个open按钮
//    QPushButton* open = new QPushButton("open",this);
//    //设置窗口大小
//    this->resize(500,500);
//    //设置按钮位置
//    open->move(200,200);
//    //再创建一个按钮对象，用类中成员closeBtn指针去接收
//    this->closeBtn = new QPushButton("close",this);
//    //设置按钮位置
//    closeBtn->move(200,250);
//    //将按钮设置为不可见
//    closeBtn->setVisible(false);
//    //连接信号与信号槽
//    connect(open,&QPushButton::clicked,new_Widget,&Widget::show);
//    connect(open,&QPushButton::clicked,this,&Widget::newButton);
//    connect(closeBtn,&QPushButton::clicked,new_Widget,&Widget::close);
    ////////////////////////////////////////////////////////////////////
    //////////方式2：使用一个按钮控制////////////////////
    //定义一个新的Widget对象
    QWidget* new_Widget = new QWidget;
    //定义一个open按钮
    this->openBtn = new QPushButton("open",this);
    //设置窗口大小
    this->resize(500,500);
    //设置按钮位置
    this->openBtn->move(200,200);
    //连接信号和槽
    connect(this->openBtn,&QPushButton::clicked,new_Widget,&Widget::show);
    connect(this->openBtn,&QPushButton::clicked,this,&Widget::setclose);
    connect(this->openBtn,&QPushButton::clicked,new_Widget,&Widget::close);
    connect(this->openBtn,&QPushButton::clicked,this,&Widget::setopen);
    ////////////////////////////////////////////////////////////////////
    //////////方式3：使用Lambda表达式(一气呵成)////////////////////
//        //定义一个新的Widget对象
//        QWidget* new_Widget = new QWidget;
//        //定义一个open按钮
//        this->openBtn = new QPushButton("open",this);
//        //设置窗口大小
//        this->resize(500,500);
//        //设置按钮位置
//        this->openBtn->move(200,200);
//        connect(openBtn,&QPushButton::clicked,this,[=](){
//            new_Widget->show();
//            openBtn->setText("close");
//            connect(openBtn,&QPushButton::clicked,this,[=](){
//              new_Widget->close();
//              openBtn->setText("open");
//            });
//        });
    /////////////////////////////////////////////////////////////////////
}
//将按钮设置为可见
void Widget::newButton()
{
    closeBtn->setVisible(true);
}
void Widget::setclose()
{
    //btn->setText("close");
    this->openBtn->setText("close");
    this->flag++;
}
void Widget::setopen()
{
    //btn->setText("close");
    if(this->flag%2==0)
    {
      this->openBtn->setText("open");
    }
}
Widget::~Widget()
{

}
