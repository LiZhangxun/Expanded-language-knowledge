#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>

////拓展：
//1.信号可以连接信号
//2.一个信号可以连接多个槽函数
//3.多个信号可以连接同一个槽函数
//4.信号和槽函数的参数必须一一对应
//5.信号的参数个数可以多于槽的参数的个数


//Teacher 类 老师类
//Student 类 学生类
//下课后，老师会触发一个信号：饿了，学生响应信号，请客吃饭

Widget::Widget(QWidget *parent):QWidget(parent),ui(new Ui::Widget)
{

    ///////////////////版本一:无重载版本////////////////////////

//    ui->setupUi(this);

//    //创建一个老师对象
//    this->zt=new Teacher;

//    //创建一个学生对象
//    this->st=new Student;

//    //老师饿了，学生请客的连接：
//    connect(zt,&Teacher::hungry,st,&Student::treat);

//    //调用下课函数
//    this->classisover();//代码有逻辑顺序，要先做好连接，才会触发信号


    ///////////////////版本二:重载版本(带参数)////////////////////////
//    ui->setupUi(this);

//    //创建一个老师对象
//    this->zt=new Teacher;

//    //创建一个学生对象
//    this->st=new Student;

//    //连接带参数的信号和槽：
//    //函数指针->函数地址,参数是QString类型,参数一一对应
//    void(Teacher::*teachersignal)(QString)=&Teacher::hungry;
//    void(Student::*studentslot)(QString)=&Student::treat;
//    connect(zt,teachersignal,st,studentslot);

//    //点击一个下课的按钮，才触发下课
//    QPushButton *btn=new QPushButton("下课",this);

//    //重置窗口大小
//    this->resize(600,400);

//    //调整按钮位置
//    btn->move(200,200);

//    //点击按钮，触发
//    connect(btn,&QPushButton::clicked,this,&Widget::classisover);

    ///////////////////版本三:信号连接信号////////////////////////
//    ui->setupUi(this);

//    //创建一个老师对象
//    this->zt=new Teacher;

//    //创建一个学生对象
//    this->st=new Student;

//    //创建按钮
//    QPushButton*btn=new QPushButton("下课",this);
//    this->resize(600,400);

//    //无参信号和槽连接,参数是void类型,参数一一对应
//    void(Teacher::*teachersignal2)(void)=&Teacher::hungry;
//    void(Student::*studentslot2)(void)=&Student::treat;
//    connect(zt,teachersignal2,st,studentslot2);

//    //信号连接信号
//    //如果采用版本1中的有参槽函数(QString)时候会报错
//    //因为clicked的参数为bool类型，槽函数teachersignal2的参数为QString,不匹配
//    //所以这里要采用无参的void,使信号的参数多于槽的参数
//    connect(btn,&QPushButton::clicked,zt,teachersignal2);

//    //断开信号和槽(信号)之间的连接,参数与连接时一样
//    //disconnect(zt,teachersignal2,st,studentslot2);

    ///////////////////版本四:QT4版本以前的信号和槽连接方式////////////////////////
//    ui->setupUi(this);

//    //创建一个老师对象
//    this->zt=new Teacher;

//    //创建一个学生对象
//    this->st=new Student;

//    //利用QT4版本以前的信号和槽连接方式
//    //优点：参数直观；
//    //缺点：参数不做检测,容易出错
//    connect(zt,SIGNAL(hungry(QString)),st,SLOT(treat(QString)));

//    //点击一个下课的按钮，才触发下课
//    QPushButton *btn=new QPushButton("下课",this);

//    //重置窗口大小
//    this->resize(600,400);

//    //调整按钮位置
//    btn->move(200,200);

//    //点击按钮，触发
//    connect(btn,&QPushButton::clicked,this,&Widget::classisover);

    ///////////////////版本五:Lambda表达式////////////////////////
    ui->setupUi(this);

    //创建一个老师对象
    this->zt=new Teacher;

    //创建一个学生对象
    this->st=new Student;

    //连接带参数的信号和槽：
    //函数指针->函数地址,参数是QString类型,参数一一对应
    void(Teacher::*teachersignal)(QString)=&Teacher::hungry;
    void(Student::*studentslot)(QString)=&Student::treat;
    connect(zt,teachersignal,st,studentslot);

    //点击一个下课的按钮，才触发下课
    QPushButton *btn=new QPushButton("下课",this);

    //重置窗口大小
    this->resize(600,400);

    //窗口位置
    this->move(600,300);

    //调整按钮位置
    btn->move(200,200);

    //点击按钮，触发
    connect(btn,&QPushButton::clicked,this,&Widget::classisover);

    //Lambda表达式
    //[函数对象参数](操作符重载函数参数)mutable ->返回值{函数体}+()小括号是函数调用;
//    [=](){
//        btn->setText("aaa");
//    }();

    int flag = 0;//控制按钮flag位
    //用Lambda表达式实现点击按钮关闭窗口
    //Lambda表达式是一个函数，函数里面可以调用任意函数,可以用来调用多个槽函数
    //connect第三个参数是this，第四个是Lambda表达式时，this可以省略
    QPushButton *btn2=new QPushButton("关闭",this);
    connect(btn2,&QPushButton::clicked,this,[=,&flag](){
        if(flag%2==0)
        {
            btn2->setText("打开");
            emit zt->hungry("宫爆鸡丁");
        }
        else
        {
            btn2->setText("关闭");
        }
        flag++;
    });

}
void Widget::classisover()
{
    //下课函数：触发老师饿了的信号
    //使用emit在恰当的位置发送信号

    //版本一:无重载版本
//    emit zt->hungry();

    //版本二:重载版本
    emit zt->hungry("宫爆鸡丁");
}

Widget::~Widget()
{
    delete ui;
}
