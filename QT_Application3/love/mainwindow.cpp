#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSound>
#include <QLineEdit>
#include <QString>
#include <QDebug>
#include <QPainter>
#include <QMessageBox>
#include <QTimer>
#include <QPixmap>
#include "photoplaysecene.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //背景音乐
    QSound *winSound = new QSound(":/res/xqg1.wav",this);
    //播放背景音效
    winSound->setLoops(-1);
    winSound->play();

    ui->progressBar->hide();//隐藏进度条
    QString str1=QString("猪猪老婆");
    QString str2=QString("5201314");
    ui->progressBar->setValue(0);
    ui->progressBar->update();
    //实例化场景
    photoscene = new PhotoPlaySecene;
    //登录按钮
    connect(ui->denglu,&QPushButton::clicked,this,[=](){
        if((str1==ui->lineEdit->text())&&(str2==ui->lineEdit_2->text()))//从Lineedit里面读取数据
        {
            int percent=0;//进度条百分比
            ui->progressBar->show();//显示进度条
            QMessageBox::information(this,"傻猪猪老婆","mua~登录成功啦!");
            for(int x=0;x<1000;x++)//一共1000s
            {
                for(int i=0;i<1000;i++)//i<ms
                {
                    for(int j=0;j<200;j++);
                    for(int j=0;j<102;j++);
                }
                percent+=1;
                ui->progressBar->setValue(percent);
                ui->progressBar->update();
            }
            QTimer::singleShot(500,this,[=](){
                this->hide();//隐藏登录界面
                winSound->stop();//进入新的界面后关闭音效
                photoscene->setGeometry(this->x()-400,this->y()-200,1200,620);//设置位置
                photoscene->show();//打开新场景
            });

        }
        else
        {
            QMessageBox::critical(this,"这个猪猪老婆太傻了","登不进去的哦");
        }
    });
    //关闭按钮
    connect(ui->tuichu,&QPushButton::clicked,this,[=](){
        //提问对话框
        //参数1  父亲  参数2  标题  参数3  提示内容  参数4 按键类型  参数5 默认关联回车按键
        if (QMessageBox::Yes==QMessageBox::question(this,"这个猪猪老婆","真滴要退出嘛~？",QMessageBox::Yes|QMessageBox::No,QMessageBox::No))
        {
            QMessageBox::information(this,"傻猪猪老婆","再见啦~!");
            this->close();
        }
        else
        {
            QMessageBox::information(this,"傻猪猪老婆","你的小可爱又来喽~!");
        }
    });



}
void MainWindow::paintEvent(QPaintEvent *)
{
    //绘制背景图片
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/backg.jpg");
    pix=pix.scaled(pix.width()*0.5,pix.height()*0.5);//缩放图片
    painter.drawPixmap(0,0,this->width(),this->height(),pix);//将背景图片拉伸至屏幕的高度和宽度
}

MainWindow::~MainWindow()
{
    delete ui;
}
