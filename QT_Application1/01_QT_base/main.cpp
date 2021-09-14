#include "mywidget.h"
#include <QApplication>//包含一个应用程序的类的头文件

//argc命令行变量的数量；argv命令行变量的数组
int main(int argc, char *argv[])
{
    //a:应用程序对象，在Qt中有且仅有一个
    QApplication a(argc, argv);

    //窗口对象  myWidget父类->QWidget
    myWidget w;

    //窗口对象默认不会显示，必须要用show方法显示窗口
    w.show();//以顶层的方式弹出你的窗口或者控件

    //让应用程序对象进入消息循环机制,必须要点击窗口上的"x"才能退出;
    //让代码阻塞到这一行;
    return a.exec();
}
