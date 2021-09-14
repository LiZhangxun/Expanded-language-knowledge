#include "widget.h"
#include <QPushButton>
#include <QWidget>

Widget::Widget(QWidget *parent): QWidget(parent)
{
    /////////////方式一：采用两个按钮/////////////////
//    //定义一个新的Widget对象
//    new_Widget = new QWidget;

//    //定义一个open按钮
//    QPushButton* open = new QPushButton("open",this);

//    //设置窗口大小
//    this->resize(500,500);

//    //窗口位置
//    this->move(600,300);

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

    //////////方式2：使用一个按钮控制////////////////////
//    //定义一个新的Widget对象
//    new_Widget = new QWidget;

//    //定义一个open按钮
//    this->openBtn = new QPushButton("open",this);

//    //设置窗口大小
//    this->resize(500,500);

//    //窗口位置
//    this->move(600,300);

//    //设置按钮位置
//    this->openBtn->move(200,200);

//    //连接信号和槽
//    connect(this->openBtn,&QPushButton::clicked,new_Widget,&Widget::show);
//    connect(this->openBtn,&QPushButton::clicked,this,&Widget::setclose);
//    connect(this->openBtn,&QPushButton::clicked,this,&Widget::setopen);

    //////////方式3：使用一个函数控制////////////////////
//    //定义一个新的Widget对象
//    new_Widget = new QWidget;

//    //定义一个open按钮
//    this->openBtn = new QPushButton("open",this);

//    //设置窗口大小
//    this->resize(500,500);

//    //窗口位置
//    this->move(600,300);

//    //设置按钮位置
//    this->openBtn->move(200,200);

//    //连接信号和槽
//    connect(this->openBtn,&QPushButton::clicked,this,&Widget::setclose_open);

    //////////方式4：使用Lambda表达式(一气呵成)////////////////////
    //定义一个新的Widget对象
    new_Widget = new QWidget;

    //定义一个open按钮
    this->openBtn = new QPushButton("open",this);

    //设置窗口大小
    this->resize(500,500);

    //窗口位置
    this->move(600,300);

    //设置按钮位置
    this->openBtn->move(200,200);

    //使用lambda表达式
    connect(openBtn,&QPushButton::clicked,this,[=](){
        //显示新界面
        new_Widget->show();

        //按钮名称变为close
        openBtn->setText("close");

        //再嵌套信号和槽
        connect(openBtn,&QPushButton::clicked,this,[=](){
            //关闭界面
            new_Widget->close();

            //设置按钮文本为打开
            openBtn->setText("open");
        });
    });

}
//将按钮设置为可见(两个按钮实现时)
void Widget::newButton()
{
    closeBtn->setVisible(true);
}

//一个函数实现
void Widget::setclose_open()
{
    this->flag++;
    if(this->flag%2==0)
    {
        this->openBtn->setText("open");//按钮变为close
        //方式1:隐藏窗口
        //this->new_Widget->setVisible(false);//隐藏页面
        //this->new_Widget->hide();

        //方式2:关闭窗口
        this->new_Widget->close();
    }
    else
    {
        this->openBtn->setText("close");
        //方式1:
        //this->new_Widget->setVisible(true);//显示页面
        //this->new_Widget->show();

        //方式2:
        this->new_Widget->show();

    }
}

//一个按钮实现
void Widget::setclose()
{
    this->openBtn->setText("close");
    this->flag++;
}
void Widget::setopen()
{
    if(this->flag%2==0)
    {
        this->openBtn->setText("open");//按钮变为close
        this->new_Widget->close();//关闭页面
    }
}
Widget::~Widget()
{

}
