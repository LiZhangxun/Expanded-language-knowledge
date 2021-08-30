#ifndef MYCOIN_H
#define MYCOIN_H

#include <QPushButton>
#include <QTimer>
class MyCoin : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyCoin(QWidget *parent = nullptr);
    //参数代表传入的金币路径还是银币路径
    MyCoin(QString btnImg);

    int posX; //x坐标
    int posY; //y坐标
    bool flag; //正反标志

    void changeFlag();//改变标志,执行翻转效果

    QTimer *timer1; //正面翻反面 定时器

    QTimer *timer2; //反面翻正面 定时器

    int min = 1; //最小图片

    int max = 8; //最大图片

    bool isAnimation  = false; //做翻转动画的标志

    void mousePressEvent(QMouseEvent *e);//动画期间禁用按钮

    bool isWin_btn = false; //是否胜利,先给定默认值为false


signals:

public slots:
};

#endif // MYCOIN_H
