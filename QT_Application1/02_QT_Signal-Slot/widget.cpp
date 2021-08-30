#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>

//Teacher 类 老师类
//Student 类 学生类
//下课后，老师会触发一个信号：饿了，学生响应信号，请客吃饭

Widget::Widget(QWidget *parent):QWidget(parent),ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建一个老师对象
    this->zt=new Teacher;

    //创建一个学生对象
    this->st=new Student;

    //老师饿了，学生请客的连接：
    //connect(zt,&Teacher::hungry,st,&Student::treat);

    //版本1：信号连接槽函数
    //连接带参数的版本(需要利用函数指针明确指定调用哪个信号和槽函数)
    //指针->地址
    //函数指针->函数地址
//    void(Teacher::*teachersignal)(QString)=&Teacher::hungry;//槽函数与信号类型对应
//    void(Student::*studentslot)(QString)=&Student::treat;//两个都是QString
//    connect(zt,teachersignal,st,studentslot);

//    //调用下课函数
//    classisover();//代码有逻辑顺序，要先做好连接，才会触发信号

    //点击一个下课的按钮，才触发下课
//    QPushButton*btn=new QPushButton("下课",this);
//    this->resize(600,400);

//    //点击按钮，触发
//    connect(btn,&QPushButton::clicked,this,&Widget::classisover);
//////////////////////////////////////////////////////////////////////////////
    //版本2：信号连接信号
    QPushButton*btn=new QPushButton("下课",this);
    this->resize(600,400);

    void(Teacher::*teachersignal2)(void)=&Teacher::hungry;//槽函数与信号类型对应
    void(Student::*studentslot2)(void)=&Student::treat;//两个都是void
    connect(zt,teachersignal2,st,studentslot2);
    //信号连接信号
    connect(btn,&QPushButton::clicked,zt,teachersignal2);
    //如果采用版本1中的有参槽函数(QString)时候会报错
    //因为clicked的参数为bool类型，槽函数teachersignal2的参数为QString,不匹配
    //所以这里要采用无参的void

//    //断开信号
//    disconnect(zt,teachersignal2,st,studentslot2);


    //拓展：
    //1.信号可以连接信号
    //2.一个信号可以连接多个槽函数
    //3.多个信号可以连接同一个槽函数
    //4.信号和槽函数的参数必须一一对应
    //5.信号的参数个数可以多于槽的参数的个数

    //利用QT4版本以前的信号和槽连接方式
    //connect(zt,SIGNAL(hungry()),st,SLOT(treat()));
    //QT4版本优点：参数直观；缺点：参数不做检测

    //Lambda表达式
    //[函数对象参数](操作符重载函数参数)mutable ->返回值{函数体}+()小括号是函数调用;
//    [=](){
//        btn->setText("aaa");
//    }();

    //用Lambda表达式实现点击按钮关闭窗口
    //Lambda表达式是一个函数，函数里面可以调用任意函数,可以用来调用多个槽函数
    //connect第三个参数是this，第四个是Lambda表达式时，this可以省略
    QPushButton *btn2=new QPushButton;
    btn2->setText("关闭");
    btn2->move(100,0);
    btn2->setParent(this);
    connect(btn2,&QPushButton::clicked,this,[=](){
//        this->close();
//        emit zt->hungry();
        btn2->setText("打开");
    });



}
void Widget::classisover()
{
    //下课函数：触发老师饿了的信号
    //emit zt->hungry();//使用emit在恰当的位置发送信号
    emit zt->hungry("宫爆鸡丁");
}

Widget::~Widget()
{
    delete ui;
}
