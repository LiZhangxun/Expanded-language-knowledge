#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>


class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = 0);

protected:
    //QThread的虚函数
    //线程处理函数
    //不能直接调用，通过start()间接调用
    void virtual run();

signals:
    void isDone();//线程内部内容处理完后，发送这个信号

public slots:
};

#endif // MYTHREAD_H
