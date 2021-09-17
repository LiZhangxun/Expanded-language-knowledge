#include "widget.h"
#include "ui_widget.h"
#include <QMovie>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //设置默认定位
    ui->stackedWidget->setCurrentIndex(0);

    //栈控件使用
    connect(ui->btn1,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->btn2,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(ui->btn3,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(2);
    });

    //下拉框
    ui->comboBox->addItem("奔驰");
    ui->comboBox->addItem("宝马");
    ui->comboBox->addItem("拖拉机");
    //点击按钮选中拖拉机
    connect(ui->select,&QPushButton::clicked,[=](){
        //ui->comboBox->setCurrentIndex(2);
        ui->comboBox->setCurrentText("拖拉机");
    });
    //利用qlabel显示图片
       ui->label_2->setPixmap(QPixmap(":/Image/down.png"));

    //利用qlabel显示动态图片gif
    QMovie *movie=new QMovie(":/Image/mario.gif");
    ui->movie->setMovie(movie);
    //播放动图
    movie->start();


}

Widget::~Widget()
{
    delete ui;
}
