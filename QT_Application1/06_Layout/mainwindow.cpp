#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QDialog>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
    QMessageBox::critical(this,"critical","你还没输入密码呢！");
    });
    connect(ui->pushButton_2,&QPushButton::clicked,this,[=](){
    QMessageBox::information(this,"info","再见");
    this->close();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
