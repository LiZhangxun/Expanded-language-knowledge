#include "mycoin.h"
#include <QDebug>
#include <QTimer>
#include <QPixmap>

MyCoin::MyCoin(QString btnImg)
{
    QPixmap pixmap;
    bool ret = pixmap.load(btnImg);
    if(!ret)
    {
        QString str=QString("图片 %1 加载失败!").arg(btnImg);
        qDebug() << str;
    }

    this->setFixedSize( pixmap.width(), pixmap.height() );
    this->setStyleSheet("QPushButton{border:0px;}");
    this->setIcon(pixmap);
    this->setIconSize(QSize(pixmap.width(),pixmap.height()));

    //初始化定时器
    timer1 = new QTimer(this);
    timer2 = new QTimer(this);

    //监听正面翻转的信号槽
    connect(timer1,&QTimer::timeout,[=](){
        QPixmap pixmap;
        QString str = QString(":/res/Coin000%1.png").arg(this->min++);
        pixmap.load(str);
        this->setFixedSize(pixmap.width(),pixmap.height() );
        this->setStyleSheet("QPushButton{border:0px;}");
        this->setIcon(pixmap);
        this->setIconSize(QSize(pixmap.width(),pixmap.height()));
        if(this->min > this->max) //如果大于最大值，重置最小值，并停止定时器
        {
            this->min = 1;
            this->isAnimation  = false;
            timer1->stop();
        }
    });
    connect(timer2,&QTimer::timeout,[=](){
        QPixmap pixmap;
        QString str = QString(":/res/Coin000%1.png").arg((this->max)-- );
        pixmap.load(str);
        this->setFixedSize(pixmap.width(),pixmap.height() );
        this->setStyleSheet("QPushButton{border:0px;}");
        this->setIcon(pixmap);
        this->setIconSize(QSize(pixmap.width(),pixmap.height()));
        if(this->max < this->min) //如果小于最小值，重置最大值，并停止定时器
        {
            this->max = 8;
            this->isAnimation  = false;
            timer2->stop();
        }
    });
}
void MyCoin::mousePressEvent(QMouseEvent *e)
{
    if(this->isAnimation||this->isWin_btn )//如果正在执行东西或者胜利了，按钮禁用
    {
        return;
    }
    else
    {
        return QPushButton::mousePressEvent(e);//交给父类
    }
}
void MyCoin::changeFlag()
{
    if(this->flag) //如果是正面，执行下列代码
    {
        timer1->start(30);
        this->isAnimation  = true;
        this->flag = false;
    }
    else //反面执行下列代码
    {
        timer2->start(30);
        this->isAnimation  = true;
        this->flag = true;
    }
}
