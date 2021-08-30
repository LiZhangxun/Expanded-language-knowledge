#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:

public slots:
    //公共槽函数位置（早期版本必须要写在这）,高版本可以写在public下或者全局下;
    //返回值是void，需要声明，也需要实现；
    //可以有参数，可以发生重载
    void treat();

    void treat(QString foodName);
};

#endif // STUDENT_H
