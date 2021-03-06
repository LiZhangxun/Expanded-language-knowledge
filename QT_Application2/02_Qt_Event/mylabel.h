#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>
//需要将父类名字修改为QLabel,否则两边类型不一致，无法提升
class mylabel : public QLabel
{
    Q_OBJECT
public:
    explicit mylabel(QWidget *parent = nullptr);
    //重写鼠标进入事件
    void enterEvent(QEvent *event);

    //重写鼠标离开事件
    void leaveEvent(QEvent *event);

    //重写鼠标按下
    virtual void mousePressEvent(QMouseEvent *ev);

    //重写鼠标释放
    virtual void mouseReleaseEvent(QMouseEvent *ev);

    //重写鼠标移动
    virtual void  mouseMoveEvent(QMouseEvent *ev);

    //通过event事件分发器,拦截鼠标按下事件
    bool event(QEvent *e);

signals:

public slots:
};

#endif // MYLABEL_H
