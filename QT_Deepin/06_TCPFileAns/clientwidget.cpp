#include "clientwidget.h"
#include "ui_clientwidget.h"
#include <QDebug>
#include <QMessageBox>
#include <QHostAddress>

ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);

    tcpSocket = new QTcpSocket(this);

    isStart = true;

    ui->progressBar->setValue(0); //设定进度条当前值

    setWindowTitle("客户端");

    //如果接受到数据，触发信号
    connect(tcpSocket, &QTcpSocket::readyRead,
    [=]()
    {
        //取出接收的内容
        QByteArray buf = tcpSocket->readAll();

        if(true == isStart)
        {
            //接收头
            isStart = false;

            //解析头部信息 :

            //假设str字符串格式为这样：
            //QString str = "hello##1024";
            //拆包，其中##号将字符串分隔为hello(第0段)和1024(第1段);
            //str.section("##", 0, 0);//参数(0,0)就表示从第0段开始到第0段结束：取出‘hello’;
            //str.section("##", 1, 1);//参数(1,1)就表示从第1段开始到第1段结束：取出'1024’;
            //假设str字符串格式为这样：QString str = "hello##1024##mike";
            //str.section("##", 2, 2);//参数(2,2)就表示从第2段开始到第2段结束：取出‘mike’;

            //初始化
            //文件名
            fileName = QString(buf).section("##", 0, 0);
            //文件大小
            fileSize = QString(buf).section("##", 1, 1).toInt();//字符串转int型
            recvSize = 0;   //已经接收文件大小

            //打开文件
            //关联文件名字
            file.setFileName(fileName);

            //只写方式方式，打开文件
            bool isOk = file.open(QIODevice::WriteOnly);
            if(false == isOk)
            {
                qDebug() << "WriteOnly error 58";

                tcpSocket->disconnectFromHost(); //断开连接
                tcpSocket->close(); //关闭套接字

                return; //如果打开文件失败，中断函数
            }

            //弹出对话框，显示接收文件的信息(导致错误，无法接收数据)
//            QString str = QString("接收的文件: [%1: %2kb]").arg(fileName).arg(fileSize/1024);
//            QMessageBox::information(this, "文件信息", str);

            //设置进度条
            ui->progressBar->setMinimum(0); //最小值
            ui->progressBar->setMaximum(fileSize/1024); //最大值
            ui->progressBar->setValue(0); //当前值

        }
        else //文件信息
        {
            qint64 len = file.write(buf);
            if(len >0) //接收数据大于0
            {
                recvSize += len; //累计接收大小
            }

            //更新进度条
            ui->progressBar->setValue(recvSize/1024);

            if(recvSize == fileSize) //文件接收完毕
            {

                //先给服务发送(接收文件完成的信息)
                tcpSocket->write("file done");

                QMessageBox::information(this, "完成", "文件接收完成");
                file.close(); //关闭文件
                //断开连接
                tcpSocket->disconnectFromHost();
                tcpSocket->close();

            }
        }

        }

    );

}

ClientWidget::~ClientWidget()
{
    delete ui;
}

void ClientWidget::on_buttonConnect_clicked()
{
    //获取服务器的ip和端口
    QString ip = ui->lineEditIP->text();
    quint16 port = ui->lineEditPort->text().toInt();

    //主动和服务器连接
    tcpSocket->connectToHost(QHostAddress(ip), port);

    isStart = true;

    //设置进度条
    ui->progressBar->setValue(0);
}
