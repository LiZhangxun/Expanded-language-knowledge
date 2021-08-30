#include "mythread.h"

MyThread::MyThread(QObject *parent) : QThread(parent)
{

}

void MyThread::run()
{
    //很复杂的数据处理
    //需要耗时5s
    sleep(5);//在qthread内部，不需要加类名来调用sleep函数

    emit isDone();//发送信号
}

