#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //点击新建按钮 弹出一个对话框
    connect(ui->actionnew,&QAction::triggered,this,[=](){
        //对话框分类：模态对话框 非模态对话框
        //模态对话框（不可以对其它的窗口进行操作）
        //非模态对话框(可以对其它窗口操作)
/////////////////////////////////////////////////////////////
//        //模态创建
//        QDialog dig(this);
//        dig.resize(200,100);
//        dig.exec();//对话框弹出后，代码有阻塞功能,后面的暂时不会执行
//        qDebug()<<"模态对话框弹出";
/////////////////////////////////////////////////////////////
//        //非模态创建
//        QDialog* dig2=new QDialog(this);//防止一闪(因为在Lambda函数内部)而过创建在堆区
//        dig2->show();
//        dig2->resize(200,100);
//        dig2->setAttribute(Qt::WA_CustomWhatsThis);//当关闭非模态对话框时自动删除堆区数据
//        qDebug()<<"非模态对话框弹出";
/////////////////////////////////////////////////////////////
          //消息对话框
          //1.错误对话框
          //QMessageBox::critical(this,"critical","错误");//模态对话框
          //2.信息对话框
          //QMessageBox::information(this,"info","信息");
          //3.提问对话框
          //参数1：父亲；参数2：标题；参数3：提示内容；参数4：关联的按键类型；参数5：默认关联回车的按键类型
          //QMessageBox::question(this,"question","提问",QMessageBox::Save|QMessageBox::Cancel,QMessageBox::Cancel);
          //返回值是按下了哪个按键
//          if(QMessageBox::Save==QMessageBox::question(this,"question","提问",QMessageBox::Save|QMessageBox::Cancel,QMessageBox::Cancel))
//          {
//              qDebug()<<"选择的是保存";
//          }
//          else
//          {
//              qDebug()<<"选择的是取消";
//          }
          //警告对话框
          //QMessageBox::warning(this,"warning","警告");
////////////////////////////////////////////////////////////
          //其它标准对话框

          //颜色对话框
          //QColor color=QColorDialog::getColor(QColor(255,0,0));
          //qDebug()<<"r= "<<color.red();

          //文件对话框 参数1：父亲；参数2：标题；参数3：默认打开路径；参数4：过滤文件格式;
          //返回值是选取文件的路径
          //QString str=QFileDialog::getOpenFileName(this,"打开文件","/home/lizhangxun","(*.txt)");
          //qDebug()<<str;

          //字体对话框
          bool flag;
          QFont font=QFontDialog::getFont(&flag,QFont("宋体",18));
          qDebug()<<"字体："<<font.family().toUtf8().data()<<"是否加粗："<<font.bold()<<"是否倾斜："<<font.italic();

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
