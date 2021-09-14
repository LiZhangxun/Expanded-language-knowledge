#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->action_new->setIcon(QIcon("/home/lizhangxun/QT_DEBUG/QT_Application/learning_Qt_04/Image/Luffy.png"));

    //使用添加Qt资源" :+前缀名+文件名"
    ui->action_new->setIcon(QIcon(":/Image/Luffy.png"));
    ui->action_open->setIcon(QIcon(":/Image/LuffyQ.png"));

}

MainWindow::~MainWindow()
{
    delete ui;
}
