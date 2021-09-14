#include "mywidget.h"
#include <QPushButton> //按钮控件的头文件

// 命名规范:
// 类名:首字母大写,单词和单词之间首字母大写
// 函数名:变量名称首字母小写,单词和单词之间首字母大写

// 快捷键:
// 注释: ctrl + /
// 运行: ctrl + r
// 编译: ctrl + b
// 字体缩放: ctrl + 鼠标滚轮
// 查找关键字: ctrl + f
// 帮助文档: F1
// 自动对齐: ctrl + i


//对象树:当指定了父亲之后,析构函数会从上至下逐一释放

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent) //初始化列表
{
    //创建按钮对象指针
    QPushButton * btn = new QPushButton ;

    //btn -> show();//show()以顶层的方式弹出你的控件(新窗口)

    //让btn对象在mywidget中显示
    btn -> setParent(this);

    //显示文本
    btn -> setText("First Button");

    //创建第二个按钮(QPushButton的重载版本),按照控件的大小创建窗口
    QPushButton * btn2 = new QPushButton("Second Button", this);

    //重置窗口大小(width,height)
    resize(600, 400);

    //移动btn2按钮
    btn2 -> move(100, 100);

    //重置按钮btn2的大小
    btn2 -> resize(400, 50);

    //设置固定的窗口大小,不允许用户拖拽
    setFixedSize(600, 400);

    //设置窗口标题
    setWindowTitle("First Window");


}

MyWidget::~MyWidget()
{

}
