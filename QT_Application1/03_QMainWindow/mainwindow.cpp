#include "mainwindow.h"
#include <QMenuBar>                   //菜单栏
#include <QMenu>                      //菜单
#include <QAction>                    //菜单项
#include <QToolBar>                   //工具栏
#include <QtDebug>
#include <QPushButton>
#include <QStatusBar>
#include <QLabel>
#include <QDockWidget>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //重置窗口大小
    resize(600,400);
    //菜单栏创建
    //菜单栏只能最多有一个
    QMenuBar *bar=menuBar();//menuBar创建时已经将它放到对象树中
    //将菜单栏放入到窗口中
    setMenuBar(bar);
    //创建菜单
    QMenu * fileMenu=bar->addMenu("文件");//返回值是QMenu
    QMenu * editMenu=bar->addMenu("编辑");
    //创建一个菜单项目
    QAction *newcreate=fileMenu->addAction("新建");//返回值是QAction
    //添加分割线
    fileMenu->addSeparator();
    QAction *open=editMenu->addAction("打开");

    //工具栏可以有多个
    QToolBar*toolBar=new QToolBar(this);
    //将工具栏放入窗口(设置默认停靠区域：左边)
    addToolBar(Qt::LeftToolBarArea,toolBar);
    //后期设置：只允许左右停靠
    toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
    //设置浮动(不允许浮动)
    toolBar->setFloatable(false);
    //设置移动(不允许移动)
    toolBar->setMovable(false);
    //在工具栏中设置内容
    toolBar->addAction(newcreate);
    //添加分割线
    toolBar->addSeparator();
    toolBar->addAction(open);
    //工具栏中添加控件
    QPushButton *btn=new QPushButton("按钮",this);
    toolBar->addWidget(btn);

    //状态栏(最多只有一个)
    QStatusBar*stbar=statusBar();
    //设置到窗口中
    setStatusBar(stbar);
    //放标签控件
    QLabel *labe1=new QLabel("提示信息",this);
    //放置到状态栏中
    stbar->addWidget(labe1);
    //右侧提示信息
    QLabel *labe2=new QLabel("右侧提示信息",this);
    stbar->addPermanentWidget(labe2);

    //铆接部件(浮动窗口)(可以有多个)
    QDockWidget *dockWidget=new QDockWidget("浮动",this);
    addDockWidget(Qt::BottomDockWidgetArea,dockWidget);
    //设置后期停靠区域(只允许上下)
    dockWidget->setAllowedAreas(Qt::TopDockWidgetArea|Qt::BottomDockWidgetArea);

    //设置中心部件(只能一个)
    QTextEdit*edit =new QTextEdit(this);
    setCentralWidget(edit);


}

MainWindow::~MainWindow()
{

}
