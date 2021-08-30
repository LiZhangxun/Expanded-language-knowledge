#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置单选按钮，男默认选中
    ui->radioButton->setChecked(true);

    //选中女后，打印信息
    connect(ui->radioButton_2,&QRadioButton::clicked,[=](){
       qDebug()<<"你选中女的！" ;
    });

    //多选按钮,2是选中，0是未选中
    connect(ui->checkBox,&QCheckBox::stateChanged,this,[=](int state){
        qDebug()<<state;
    });

    //利用listwidget写诗
//    QListWidgetItem *item=new QListWidgetItem("锄禾日当午");
//    //将一行诗放到listwidget控件中
//    ui->listWidget->addItem(item);
//    //设置水平居中
//    item->setTextAlignment(Qt::AlignHCenter);

    //Qstringlist,链表容器，诗的内容全部写进去
    QStringList list;
    list<<"锄禾日当午"<<"汗滴禾下土"<<"谁知盘中餐"<<"粒粒皆辛苦";
    ui->listWidget->addItems(list);
}

Widget::~Widget()
{
    delete ui;
}
