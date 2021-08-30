#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QDesktopWidget *desktop = QApplication::desktop();//将窗口显示到屏幕中央
    w.move((desktop->width() - w.width())*0.5, (desktop->height() - w.height())*0.5);
    w.show();

    return a.exec();
}
