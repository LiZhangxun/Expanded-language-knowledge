#ifndef MYWIDGET_H
#define MYWIDGET_H
#include <QWidget>//包含头文件 QWidget 窗口类

class myWidget : public QWidget//公有继承
{
    Q_OBJECT//允许类中使用信号和槽的机制

public:
    myWidget(QWidget *parent = 0);//含有默认参数的构造函数
    ~myWidget();//析构函数
};

#endif // MYWIDGET_H
