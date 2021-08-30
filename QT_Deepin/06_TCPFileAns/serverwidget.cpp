#include "serverwidget.h"
#include "ui_serverwidget.h"
#include <QFileDialog>//选择文件的对话框
#include <QDebug>
#include <QFileInfo>//获取文件信息

ServerWidget::ServerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServerWidget)
{
    ui->setupUi(this);

    //监听套接字
    tcpServer = new QTcpServer(this);

    //监听
    tcpServer->listen(QHostAddress::Any, 8888);
    setWindowTitle("服务器端口为：8888");

    //设置进度条
    ui->progressBar->setMinimum(0); //最小值
    ui->progressBar->setMaximum(100); //最大值
    ui->progressBar->setValue(0); //当前值


    //两个按钮都不能按(设置按钮一开始不能按，颜色会变灰，连接上之后才可以点)
    ui->buttonFile->setEnabled(false);
    ui->buttonSend->setEnabled(false);

    //如果客户端成功和服务器连接
    //tcpServer会自动触发 newConnection()
    connect(tcpServer, &QTcpServer::newConnection,
    [=]()
    {
        //取出建立好连接的套接字
        tcpSocket = tcpServer->nextPendingConnection();
        //获取对方的ip和端口
        QString ip = tcpSocket->peerAddress().toString();
        quint16 port = tcpSocket->peerPort();
        //将数据包装成固定格式
        QString str = QString("[%1:%2] 成功连接").arg(ip).arg(port);
        ui->textEdit->setText(str); //显示到编辑区

        //成功连接后，才能按选择文件
        ui->buttonFile->setEnabled(true);

        //如果文件发送完毕
        connect(tcpSocket, &QTcpSocket::readyRead,
                [=]()
                {
                    //读取客户端的信息
                    QByteArray buf = tcpSocket->readAll();
                    if(QString(buf) == "file done")//如果是接收到了客户端发来的file done，则显示发送完毕
                    {
                        //文件接收完毕
                         ui->textEdit->append("文件发送完毕");
                         file.close();

                         //断开客户端端口
                         tcpSocket->disconnectFromHost();
                         tcpSocket->close();
                    }

                }

                );

    }
    );

    //定时器触发
    connect(&timer, &QTimer::timeout,
            [=]()
            {
                //关闭定时器
                timer.stop();
                //发送文件
                sendData();
            }

            );

}

ServerWidget::~ServerWidget()
{
    delete ui;
}

//选择文件的按钮
void ServerWidget::on_buttonFile_clicked()//当点击了选择文件的按钮时，弹出选择文件对话框
{
    QString filePath = QFileDialog::getOpenFileName(this, "open", "../");
    if(false == filePath.isEmpty()) //如果选择文件路径有效
    {
        fileName.clear();//先清空之前包含的文件信息
        fileSize = 0;

        //获取文件信息
        QFileInfo info(filePath);
        fileName = info.fileName(); //获取文件名字
        fileSize = info.size(); //获取文件大小

        sendSize = 0; //发送文件的大小

        //指定文件的名字
        file.setFileName(filePath);

        //只读方式打开文件
        bool isOk = file.open(QIODevice::ReadOnly);
        if(false == isOk)
        {
            qDebug() << "只读方式打开文件失败 106";
        }

        //提示打开文件的路径
        ui->textEdit->append(filePath);
        //选择完文件之后将按钮禁用
        ui->buttonFile->setEnabled(false);
        //将发送文件按钮打开
        ui->buttonSend->setEnabled(true);

    }
    else
    {
        qDebug() << "选择文件路径出错 118";
    }

}
//发送文件按钮
void ServerWidget::on_buttonSend_clicked()
{
    //点了之后将发送按钮禁用
    ui->buttonSend->setEnabled(false);

    //先发送文件头信息  文件名##文件大小
    QString head = QString("%1##%2").arg(fileName).arg(fileSize);
    //发送头部信息
    qint64 len = tcpSocket->write( head.toUtf8() );
    if(len > 0)//头部信息发送成功
    {
        //发送真正的文件信息
        //防止TCP黏包(黏包的意思就是文件信息和文件数据重叠)
        //需要通过定时器延时 20 ms
        timer.start(20);
    }
    else
    {
        qDebug() << "头部信息发送失败 142";
        file.close();
        ui->buttonFile->setEnabled(true);
        ui->buttonSend->setEnabled(false);
    }
}

//发送文件数据函数
void ServerWidget::sendData()
{
    float s;
    ui->textEdit->append("正在发送文件……");
     qint64 len = 0;
     do
     {
        //每次发送数据的大小-4kb
        char buf[4*1024] = {0};
        len = 0;

        //往文件中读数据
        len = file.read(buf, sizeof(buf));
        //发送数据，读多少，发多少
        len = tcpSocket->write(buf, len);

        //发送的数据需要累积
        sendSize += len;
        s=float(sendSize)/float(fileSize);

        ui->progressBar->setValue(s*100); //当前值

     }while(len > 0);//如果发送的数据为0，就跳出do-while语句


//     //是否发送文件完毕
//     if(sendSize == fileSize)
//     {
//         ui->textEdit->append("文件发送完毕");
//         file.close();

//         //把客户端端口
//         tcpSocket->disconnectFromHost();
//         tcpSocket->close();
//     }


}
