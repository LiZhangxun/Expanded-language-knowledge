#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QFile>
#include <QTextCodec>
#include <QFileInfo>
#include <QDebug>
#include <QDateTime>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //点击选取文件按钮，弹出文件对话框
    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
       QString path=QFileDialog::getOpenFileName(this,"打开文件","/home/lizhangxun/QT_DEBUG/QT_Application2/05_QtQFile");
       //将路径放到lineedit
       ui->lineEdit->setText(path);

       //编码格式类
       //QTextCodec *codec=QTextCodec::codecForName("gbk");

       //读取内容，放入到textedit中
       //QFile默认支持的格式是utf-8
       QFile file(path);//参数就是读取的文件的路径
       //设置打开方式
       file.open(QIODevice::ReadOnly);

       //一次性读
       QByteArray array=file.readAll();

       //将读取的数据放入textedit中
       ui->textEdit->setText(array);

//       //转码，将array里面的数据转换为codec指定的格式
//       ui->textEdit->setText(codec->toUnicode(array));

//       //一行一行读
//       QByteArray array2;
//       while(!file.atEnd()) //判断是否到文件尾巴
//       {
//           array2+=file.readLine();//按行读取
//       }

//       ui->textEdit->setText(array2);
//       //ui->textEdit->setText(codec->toUnicode(array2));//转码，将array里面的数据转换为codec指定的格式

       //关闭文件
       file.close();
 ////////////////////////////////////////////////////////////////
//       //写文件
//       file.open(QIODevice::Append);//用追加的方式写,重新开始写的话用write
//       file.write("aaaaaaa");
//       file.close();
////////////////////////////////////////////

       //QFileInfo 文件信息类
       QFileInfo info(path);

       qDebug() << "大小：" << info.size() << " 后缀名：" << info.suffix() << " 文件名称："<<info.fileName() << " 文件路径："<< info.filePath();
       qDebug() << "创建日期：" << info.created().toString("yyyy/MM/dd hh:mm:ss");
       qDebug() << "最后修改日期："<<info.lastModified().toString("yyyy-MM-dd hh:mm:ss");

    });
}

Widget::~Widget()
{
    delete ui;
}
