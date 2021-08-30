#include "student.h"
#include <QtDebug>
Student::Student(QObject *parent) : QObject(parent)
{

}

void Student::treat()
{
   qDebug()<<"请老师吃饭";
}
void Student::treat(QString foodName)
{
    //QString->char *先转成QByteArray(.toUtf8()),再转char*;
    //否则打印出来的foodname自带双引号
    qDebug()<<"请老师吃饭，老师要吃："<<foodName.toUtf8().data();
}
