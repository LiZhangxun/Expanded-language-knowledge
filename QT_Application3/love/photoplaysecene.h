#ifndef PHOTOPLAYSECENE_H
#define PHOTOPLAYSECENE_H

#include <QMainWindow>
#include <QSound>
namespace Ui {
class PhotoPlaySecene;
}

class PhotoPlaySecene : public QMainWindow
{
    Q_OBJECT

public:
    explicit PhotoPlaySecene(QWidget *parent = 0);
    ~PhotoPlaySecene();

    //重写绘图事件
    void paintEvent(QPaintEvent *event);

    //按钮的flag位
    int flag=0;

    //背景音乐指针
    QSound *bks=NULL;
    QSound *cjml=NULL;

private:
    Ui::PhotoPlaySecene *ui;
};

#endif // PHOTOPLAYSECENE_H
