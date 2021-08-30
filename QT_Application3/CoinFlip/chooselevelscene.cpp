#include "chooselevelscene.h"
#include <QMenuBar>
#include <QPainter>
#include "mypushbutton.h"
#include <QDebug>
#include <QTimer>
#include <QLabel>
#include <QSound>
#include <QPixmap>
ChooseLevelScene::ChooseLevelScene(QWidget *parent) : QMainWindow(parent)
{
        //配置选择关卡场景
        this->setFixedSize(320,588);

        //设置图标
        this->setWindowIcon(QPixmap(":/res/Coin0001.png"));

        //设置标题
        this->setWindowTitle("选择关卡场景");

        //创建菜单栏
        QMenuBar * bar = menuBar();
        setMenuBar(bar);

        //创建开始菜单
        QMenu * startMenu = bar->addMenu("开始");

        //创建退出 菜单项
        QAction *  quitAction = startMenu->addAction("退出");

        //点击退出 实现退出游戏
        connect(quitAction,&QAction::triggered,[=](){
            this->close();
        });

        //选择关卡按钮音效
        QSound *chooseSound = new QSound(":/res/TapButtonSound.wav",this);
        //返回按钮音效
        QSound *backSound = new QSound(":/res/BackButtonSound.wav",this);

        //返回按钮
        MyPushButton * backBtn = new MyPushButton(":/res/BackButton.png" , ":/res/BackButtonSelected.png");
        backBtn->setParent(this);
        backBtn->move(this->width() - backBtn->width() , this->height() - backBtn->height());//放到右下角

        //点击返回
        connect(backBtn,&MyPushButton::clicked,[=](){
            backSound->play();//播放返回按钮音效
            QTimer::singleShot(500,this,[=](){
                emit this->chooseSceneBack();
            });

        });

        //创建选择关卡的按钮
        for( int i = 0 ; i < 20 ;i ++)//如何利用一个for创建一个二维矩阵
        {
            MyPushButton * menuBtn = new MyPushButton(":/res/LevelIcon.png");
            menuBtn->setParent(this);
            menuBtn->move( 25 + i%4 * 70 , 130 + i/4 * 70  );//将每个按钮排版位置，创建二维矩阵

            //监听每个按钮的点击事件
            connect(menuBtn,&MyPushButton::clicked,[=](){
                //播放选择关卡音效
                chooseSound->play();
                //进入到游戏场景
                this->hide(); //将选关场景隐藏掉
                play = new PlayScene(i+1); //创建游戏场景
                //设置游戏场景初始位置
                play->setGeometry(this->geometry());
                play->show();//显示游戏场景

                  //监听playscene里面的back按钮
                connect(play,&PlayScene::chooseSceneBack,[=](){
                    this->setGeometry(play->geometry());
                    this->show();//进入到游戏场景
                    delete play;//将创建的游戏场景删除
                    play = NULL;
                });

            });

            QLabel * label = new QLabel;
            label->setParent(this);
            label->setFixedSize(menuBtn->width(),menuBtn->height());
            label->setText(QString::number(i+1));
            label->move(25 + i%4 * 70 , 130 + i/4 * 70 );


            //设置 label上的文字对齐方式 水平居中和 垂直居中
            label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
            //设置让鼠标进行穿透   51号属性,如果不穿透，点击的是label标签（默认是盖在上面的那个）
            label->setAttribute(Qt::WA_TransparentForMouseEvents);
        }
}
void ChooseLevelScene::paintEvent(QPaintEvent *)
{
    //加载背景
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/OtherSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    //加载标题
    pix.load(":/res/Title.png");
    painter.drawPixmap( (this->width() - pix.width())*0.5,30,pix.width(),pix.height(),pix);
}
