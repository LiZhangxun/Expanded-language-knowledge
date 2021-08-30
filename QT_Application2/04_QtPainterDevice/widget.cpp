#include "widget.h"
#include "ui_widget.h"
#include <QPixmap>
#include <QPainter>
#include <QImage>
#include <QPicture>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
//    //QPixmap绘图设备
//    QPixmap pix(300,300);
//    //填充颜色
//    pix.fill(Qt::white);
//    //声明画家
//    QPainter painter(&pix);
//    painter.setPen(QPen(Qt::green));
//    painter.drawEllipse(QPoint(150,150),100,100);
//    //保存  前缀名+：+文件名+文件类型 ,不写地址时默认生成在项目的gcc文件夹里
//    pix.save("pix.png");
/////////////////////////////////////////////////////////////////////////
//      //QImage绘图,可以对像素进行访问
//      QImage image(300,300,QImage::Format_RGB32);
//      image.fill(Qt::white);
//      QPainter painter(&image);
//      painter.setPen(QPen(Qt::green));
//      painter.drawEllipse(QPoint(150,150),100,100);
//      image.save("image.png");
////////////////////////////////////////////////////////////////////////
        //Qpicture绘图设备，可以记录和重现绘图指令
        QPicture pic;
        QPainter painter;
        painter.begin(&pic);//开始往Pic上画画

        painter.setPen(QPen(Qt::cyan));
        painter.drawEllipse(QPoint(150,150),100,100);

        painter.end();//画画结束

        //保存到磁盘
        pic.save("pic.lzx");






}
//绘图事件
void Widget::paintEvent(QPaintEvent *event)
{
//    //利用QIMAGE对像素进行修改
//    QImage img;
//    img.load(":/Image/Luffy.png");
//    QPainter painter(this);

//    //修改像素点
//    for(int i=50;i<100;i++)
//    {
//        for(int j=50;j<100;j++)
//        {
//            QRgb value=qRgb(255,0,0);
//            img.setPixel(i,j,value);
//        }
//    }

//    painter.drawImage(0,0,img);

    //重现QPICTURE绘图指令
    QPainter painter(this);
    QPicture pic;
    pic.load("pic.lzx");
    painter.drawPicture(0,0,pic);
}
Widget::~Widget()
{
    delete ui;
}
