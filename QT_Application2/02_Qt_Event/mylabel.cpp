#include "mylabel.h"
#include <QDebug>
#include <QMouseEvent>
mylabel::mylabel(QWidget *parent) : QLabel(parent)
{
    //设置鼠标追踪状态
    setMouseTracking(true);//不需要鼠标点击就可以实现,要把下面的if去掉
}
//鼠标进入事件
void mylabel::enterEvent(QEvent *event)
{
    qDebug()<<"鼠标进入了";
}

//鼠标离开事件
void mylabel::leaveEvent(QEvent *event)
{
    qDebug()<<"鼠标离开了";
}
//鼠标按下
void mylabel::mousePressEvent(QMouseEvent *ev)
{

    //当鼠标左键按下  提示信息
    if( ev->button() ==  Qt::LeftButton)
    {
        QString str = QString( "鼠标按下了 x = %1   y = %2  globalX = %3 globalY = %4 " ).arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug() << str;
    }
}

//鼠标释放
void mylabel::mouseReleaseEvent(QMouseEvent *ev)
{

    if( ev->button() ==  Qt::LeftButton)
    {
    QString str = QString( "鼠标释放了 x = %1   y = %2  globalX = %3 globalY = %4 " ).arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());

    qDebug() << str;
    }

}

//鼠标移动(持续过程)
void mylabel::mouseMoveEvent(QMouseEvent *ev)
{
    if( ev->buttons()&Qt::LeftButton )//只能用这种方式去判断,用位与操作符的方式才能
    {
    QString str = QString( "鼠标移动了 x = %1   y = %2  globalX = %3 globalY = %4 " ).arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());

    qDebug() << str;
   }
}
//拦截操作
bool mylabel::event(QEvent *e)
{
    //如果是鼠标按下 ，在event事件分发中做拦截操作
    if(e->type() == QEvent::MouseButtonPress)//拦截了鼠标按下操作，则上面的鼠标按下事件就不执行了
    {
        QMouseEvent * ev  = static_cast<QMouseEvent *>(e);//类型转换
        QString str = QString( "Event函数中：：鼠标按下了 x = %1   y = %2  globalX = %3 globalY = %4 " ).arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug() << str;

        return true; //true代表用户自己处理这个事件，不向下分发
    }
    //其他事件 交给父类处理  默认处理
    return QLabel::event(e);
}
