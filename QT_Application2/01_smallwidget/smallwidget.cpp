#include "smallwidget.h"
#include "ui_smallwidget.h"

Smallwidget::Smallwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Smallwidget)
{
    ui->setupUi(this);

    //QSpinBox移动，Qslider跟着移动
    void (QSpinBox:: *spsignal)(int)=&QSpinBox::valueChanged;
    connect(ui->spinBox,spsignal,ui->horizontalSlider,&QSlider::setValue);

    //Qslider滑动,QSpinbox跟着改变
    connect(ui->horizontalSlider,&QSlider::valueChanged,ui->spinBox,&QSpinBox::setValue);
}
//设置数字
void Smallwidget::setNum(int num)
{
    ui->spinBox->setValue(num);
}
//获取数字
int Smallwidget::getNum()
{
    return ui->spinBox->value();
}
Smallwidget::~Smallwidget()
{
    delete ui;
}
