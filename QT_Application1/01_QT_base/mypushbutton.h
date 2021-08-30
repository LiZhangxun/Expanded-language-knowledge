#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H
#include <QPushButton>//包含父类头文件

class Mypushbutton : public QPushButton
{
    Q_OBJECT
public:
    explicit Mypushbutton(QWidget *parent = nullptr);
    ~Mypushbutton();
signals:

public slots:
};

#endif // MYPUSHBUTTON_H
