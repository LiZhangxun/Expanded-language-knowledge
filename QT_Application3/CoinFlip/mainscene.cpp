#include "mainscene.h"
#include "ui_mainscene.h"
#include <QPainter>
#include "mypushbutton.h"
#include <QDebug>
#include <QTimer>
#include <chooselevelscene.h>
#include <QSound>  //要先在工程文件中包含QT += multimedia；
#include <QMessageBox>

MainScene::MainScene(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainScene)
{
    ui->setupUi(this);

    //配置主场景

    //设置固定大小
    setFixedSize(320,588);
    //设置图标
    setWindowIcon(QIcon(":/res/Coin0001.png"));
    //设置标题
    setWindowTitle("翻金币的主场景");
    //退出按钮的实现
    connect(ui->actionQuit,&QAction::triggered,[=](){
        this->close();
    });
    ui->pushButton->move(this->width()*0.5-ui->pushButton->width()* 0.5 ,this->height()-ui->pushButton->height() );
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        QMessageBox::information(this,"你的小宝贝来啦","小皮说：这个游戏叫翻金币，必须将所有金币翻成金色的那面才算赢，每次单击金币，旁边的金币也会跟着翻动哦～");
    });
    //帮助按钮的实现
    connect(ui->action_help,&QAction::triggered,[=](){
        QMessageBox::information(this,"你的小宝贝来啦","小皮说：这个傻猪猪老婆");
    });
    //准备开始按钮的音效
    QSound *startSound = new QSound(":/res/TapButtonSound.wav",this);
    //背景音效
    QSound *winSound = new QSound(":/res/LevelWinSound.wav",this);
    //背景音效无限循环
    winSound->setLoops(-1);
    //播放背景音效
    winSound->play();

    //开始按钮
    MyPushButton * startBtn = new MyPushButton(":/res/MenuSceneStartButton.png");
    startBtn->setParent(this);
    startBtn->move( this->width() * 0.5 - startBtn->width() * 0.5 ,this->height() * 0.7 );//将按钮放到合适位置

    //实例化选择关卡场景
    chooseScene = new ChooseLevelScene;

    //监听选择关卡的返回按钮的信号
    connect(chooseScene,&ChooseLevelScene::chooseSceneBack,this,[=](){
        this->setGeometry(chooseScene->geometry());//设置场景位置
        chooseScene->hide(); //将选择关卡场景 隐藏掉
        this->show(); //重新显示主场景
    });

    //点击开始按钮
    connect(startBtn,&MyPushButton::clicked,[=](){
            startSound->play(); //开始音效
            startBtn->zoom1();
            startBtn->zoom2();
            //延时进入到选择关卡场景中
            QTimer::singleShot(500,this,[=](){
                //设置choosescene的场景位置
                chooseScene->setGeometry(this->geometry());
                //自身隐藏
                this->hide();
                //显示选择关卡场景
                chooseScene->show();});
    });


}
void MainScene::paintEvent(QPaintEvent *)
{
    //画背景图(一般用绘图事件来绘制静态的图片(就是不需要操作和变化）
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/PlayLevelSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);//将背景图片拉伸至屏幕的高度和宽度
    //画背景上的图标
    pix.load(":/res/Title.png");
    pix=pix.scaled(pix.width()*1.2,pix.height()*1.2);//缩放图片
    painter.drawPixmap(0,10,pix);

}
MainScene::~MainScene()
{
    delete ui;
}
