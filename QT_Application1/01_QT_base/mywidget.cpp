#include "mywidget.h"
#include <QPushButton>//按钮控件的头文件
#include "mypushbutton.h"
#include <QtDebug>

//命名规范
//类名：首字母大写，单词和单词之间首字母大写
//函数名，变量名称：首字母小写，单词和单词之间首字母大写

//快捷键:
//注释： ctrl+/
//运行： ctrl+r
//编译： ctrl+b
//字体缩放：ctrl+鼠标滚轮
//查找：ctrl+f
//整行移动:ctrl+shift+↑或者↓
//帮助文档：F1,esc退出
//自动对齐：ctrl+i
//同名之间的.h和.cpp切换：F4

myWidget::myWidget(QWidget *parent): QWidget(parent)//初始化列表,用parent初始化QWidget
{
    //创建一个按钮
    QPushButton *btn=new QPushButton;

    //以顶层方式弹出窗口控件
    //btn->show();

    //设置父亲
    btn->setParent(this);

    //设置文字
    btn->setText("德玛西亚");//隐式类型转换const char* ->const Qstring&text

    //移动位置
    btn->move(100,100);

    //第二种创建(按照你控件的大小创建了窗口）
    QPushButton*btn2 = new QPushButton("孙悟空",this);

    //移动位置
    btn2->move(100,150);

    //重新指定按钮大小
    btn2->resize(50,50);

    //重新指定窗口大小
    this->resize(600,400);//或者不写this->，直接写resize(600,400)

    //设置窗口标题
    this->setWindowTitle("第一个项目");

    //窗口位置
    this->move(600,300);

    //限制窗口大小(用户无法进行拖拽)
    this->setFixedSize(600,400);

    //创建一个自己的按钮对象
    Mypushbutton*mybtn=new Mypushbutton;
    mybtn->setText("My Close");
    mybtn->move(200,0);
    mybtn->setParent(this);//设置到对象树中

    //信号和槽
    //需求：点击我的按钮，关闭窗口
    //参数1:sender：信号的发送者
    //参数2:signal：发送的信号(函数的地址)
    //参数3:receiver：接收信号的对象
    //参数4:slot：接收对象在接收到信号之后所需要调用的函数（槽函数）
    //connect(mybtn,&QPushButton::clicked,this,&myWidget::close);//方式1
    connect(mybtn,&Mypushbutton::clicked,this,&QWidget::close);//方式2

}

myWidget::~myWidget()
//调用析构时先寻找是否有子对象，先调用子对象的析构函数，但是打印顺序不一样。
{
    qDebug()<<"MyWidget类构造析构调用";
}
