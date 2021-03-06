#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    QPushButton* closeBtn;//两个按钮实现时要用到它
    QPushButton* openBtn;//单个按钮实现
    QWidget* new_Widget;//新界面(单个按钮时需要用到)

    int flag=0;//按钮改名标识位
    void setclose_open();//一个函数实现打开与关闭
    void setclose();//将按钮名称改为close
    void setopen();//将按钮名称改为open
    void newButton();//使用两个按钮实现
    ~Widget();
};

#endif // WIDGET_H
