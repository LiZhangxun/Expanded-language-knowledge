#include "photoplaysecene.h"
#include "ui_photoplaysecene.h"
#include <QSound>
#include <QLineEdit>
#include <QString>
#include <QDebug>
#include <QPainter>
#include <QMessageBox>
#include <QTimer>
#include <QPixmap>
#include <QMovie>

PhotoPlaySecene::PhotoPlaySecene(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PhotoPlaySecene)
{
    ui->setupUi(this);

    //背景音乐
    this->bks= new QSound(":/res3/所念皆星河 - CMJ 00_00_30-00_01_30.wav",this);
    //设置背景音效
    bks->setLoops(-1);

    //退出按钮实现
    connect(ui->actionExit,&QAction::triggered,this,[=](){
        this->close();
    });
    QPixmap pix1;
    pix1.load(":/res2/pic1.png");
    pix1=pix1.scaled(ui->photolabel->width(),ui->photolabel->height());//缩放图片变成框的大小
    //ui->photolabel->setPixmap(pix1);

    QPixmap pix2;
    pix2.load(":/res2/pic2.png");
    pix2=pix2.scaled(ui->photolabel->width(),ui->photolabel->height());//缩放图片变成框的大小
    //ui->photolabel->setPixmap(pix2);

    //利用QLabel显示 gif动态图片
    QMovie * movie1 = new QMovie(":/res/mario.gif");
    movie1->setScaledSize(QSize(ui->photolabel->width(),ui->photolabel->height()));//将图片设置为框的大小

    //利用QLabel显示 gif动态图片
    QMovie * movie2 = new QMovie(":/res2/gif.gif");
    movie2->setScaledSize(QSize(ui->photolabel->width(),ui->photolabel->height()));//将图片设置为框的大小

    //开始按钮
    connect(ui->start,&QPushButton::clicked,this,[=](){
        this->flag=0;
        ui->photolabel->setMovie(movie1);
        //播放动图
        movie1->start();
        //背景音乐
        this->cjml = new QSound(":/res3/cjml.wav",this);
        cjml->setLoops(-1);
        //播放背景音效
        cjml->play();
    });
    //点击了next按钮
    connect(ui->next,&QPushButton::clicked,[=](){
        this->flag++;
        ui->photolabel->clear();//清空显示
        if(this->flag==0){cjml->play();bks->stop();ui->photolabel->setMovie(movie1);movie1->start();}
        if(this->flag==1){cjml->stop();bks->play();ui->photolabel->setMovie(movie2);movie2->start();}
        if(this->flag==2){ui->photolabel->setPixmap(pix1);}
        if(this->flag==3){ui->photolabel->setPixmap(pix2);}
        if(this->flag>3){this->flag=3;}

    });
    //点击了last按钮
    connect(ui->last,&QPushButton::clicked,[=](){
        this->flag--;
        ui->photolabel->clear();//清空显示
        if(this->flag==0){cjml->play();bks->stop();ui->photolabel->setMovie(movie1);movie1->start();}
        if(this->flag==1){cjml->stop();bks->play();ui->photolabel->setMovie(movie2);movie2->start();}
        if(this->flag==2){ui->photolabel->setPixmap(pix1);}
        if(this->flag==3){ui->photolabel->setPixmap(pix2);}
        if(this->flag<0){this->flag=0;}
    });
    //点击了告白按钮
    connect(ui->heart,&QPushButton::clicked,[=](){
       ui->photolabel->clear();//清空显示
       QPixmap pix3;
       pix3.load(":/res3/iloveyou.png");
       pix3=pix3.scaled(ui->photolabel->width(),ui->photolabel->height());//缩放图片变成框的大小
       ui->photolabel->setPixmap(pix3);
    });

}
//绘制背景图
void PhotoPlaySecene::paintEvent(QPaintEvent *)
{
    //绘制背景图片
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/backg4.jpg");
    pix=pix.scaled(pix.width()*1.2,pix.height()*1.2);//缩放图片
    painter.drawPixmap(0,0,this->width(),this->height(),pix);//将背景图片拉伸至屏幕的高度和宽度
}

PhotoPlaySecene::~PhotoPlaySecene()
{
    delete ui;
}
