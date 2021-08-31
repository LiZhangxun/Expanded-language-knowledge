#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget> //包含头文件 QWidget窗口类

class MyWidget : public QWidget
{
    //Q_OBJECT //Q_OBJECT宏,信号与槽的时候需要

public:
    MyWidget(QWidget *parent = 0); //构造函数
    ~MyWidget();
};

#endif // MYWIDGET_H --> 防止头文件重复包含
