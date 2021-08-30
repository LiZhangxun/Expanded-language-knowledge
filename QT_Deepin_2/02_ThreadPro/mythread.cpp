#include "mythread.h"
#include <QThread>
#include <QDebug>
#include <QMessageBox>

MyThread::MyThread(QObject *parent) : QObject(parent)
{
    isStop = false;
}

void MyThread::myTimeout()//线程处理函数
{
    while( !isStop )
    {

        QThread::sleep(1);//每隔1s发送信号
        emit mySignal();
        //QMessageBox::aboutQt(NULL);//线程处理函数里面不允许操作界面
         qDebug() << "子线程号：" << QThread::currentThread();
    }
}

void MyThread::setFlag(bool flag)
{
    isStop = flag;
}

