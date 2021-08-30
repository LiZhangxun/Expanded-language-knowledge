#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //treewidget 树控件的使用

    //设置水平的头
    ui->treeWidget->setHeaderLabels(QStringList()<<"英雄"<<"英雄介绍");

    QTreeWidgetItem *liitem=new QTreeWidgetItem(QStringList()<<"力量");
    QTreeWidgetItem *minitem=new QTreeWidgetItem(QStringList()<<"敏捷");
    QTreeWidgetItem *zhiitem=new QTreeWidgetItem(QStringList()<<"智力");
    //加载顶层的节点
    ui->treeWidget->addTopLevelItem(liitem);
    ui->treeWidget->addTopLevelItem(minitem);
    ui->treeWidget->addTopLevelItem(zhiitem);

    //追加子节点
    QStringList heroL1;
    heroL1 << "刚被猪" << "前排坦克，能在吸收伤害的同时造成可观的范围输出";
    QTreeWidgetItem * l1 = new QTreeWidgetItem(heroL1);
    //将l1设置到顶层节点
    liitem->addChild(l1);
}

Widget::~Widget()
{
    delete ui;
}
