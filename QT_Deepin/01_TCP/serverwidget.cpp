#include "serverwidget.h"
#include "ui_serverwidget.h"

ServerWidget::ServerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServerWidget)
{
    ui->setupUi(this);

    //创建一个对象，并用成员指针指向它,指定父对象，让其自动回收空间
    tcpServer = new QTcpServer(this);
    //监听套接字
    tcpServer->listen(QHostAddress::Any, 8888);//参数1：绑定我当前网口所有的ip地址；参数2：绑定我的端口号
    //设置标题
    setWindowTitle("服务器: 8888");
    //只要有客户端连接，就会触发newconnection信号
    connect(tcpServer, &QTcpServer::newConnection,
            [=]()
            {
                //取出建立好连接的套接字
                tcpSocket = tcpServer->nextPendingConnection();

                //获取对方的IP和端口
                QString ip = tcpSocket->peerAddress().toString();//对方的ip转换为字符串
                qint16 port = tcpSocket->peerPort();//对方的端口(客户端的端口号),返回值是数值

                //将ip和端口号打包成特定形式
                QString temp = QString("[%1:%2]:成功连接").arg(ip).arg(port);

                ui->textEditRead->setText(temp);//在sever里面的read框里边显示数据

                //客户端发消息，服务端接收，从通信套接字中取出
                connect(tcpSocket, &QTcpSocket::readyRead,
                        [=]()
                        {
                            //从通信套接字中取出内容
                            QByteArray array = tcpSocket->readAll();
                            ui->textEditRead->append(array);//追加的方式，而不是覆盖之前文本的值(不是settext)
                        }
                        );


            }
            );

}

ServerWidget::~ServerWidget()
{
    delete ui;
}

//按钮的槽函数
void ServerWidget::on_buttonSend_clicked()
{
    //一进入的时候还没有tcpsocket指针,如果没有if会报错
    if(NULL == tcpSocket)
    {
        return;
    }
    //获取编辑区内容
    QString str = ui->textEditWrite->toPlainText();
    //给对方发送数据， 使用套接字是tcpSocket
    tcpSocket->write( str.toUtf8().data() );

}
//按钮的槽函数
void ServerWidget::on_buttonClose_clicked()
{
    //一进入的时候还没有tcpsocket指针,如果没有if会报错
    if(NULL == tcpSocket)
    {
        return;
    }

    //主动和客户端端口断开
    tcpSocket->disconnectFromHost();
    tcpSocket->close();
    tcpSocket = NULL;//将套接字置空
}
