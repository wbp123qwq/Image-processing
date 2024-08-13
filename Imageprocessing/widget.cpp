#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QLabel>
#include <QFileDialog>
#include <QPixmap>
#include <QVBoxLayout>
#include <QWidget>
#include <QPixmap>
#include <QImage>
#include"QMessageBox"
#include"QBuffer"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->label_2->setScaledContents(true);
    connect(&m_socket,&QTcpSocket::disconnected,this,&Widget::start_connect);
    connect(&m_socket,&QTcpSocket::connected,this,&Widget::stop_connnect);
}
Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("打开图片"), "", tr("图片文件 (*.png *.jpg *.bmp *.jfif)"));
    if (fileName.isEmpty()) return;

    src = cv::imread(fileName.toStdString(), cv::IMREAD_COLOR);
    if (src.empty()) {
        QMessageBox::warning(this, tr("错误"), tr("无法加载图片文件！"));
        return;
    }
    QImage qImg = matToQImage(src);
    ui->label_2->setScaledContents(true);
    ui->label_2->setPixmap(QPixmap::fromImage(qImg));
}

QImage Widget::matToQImage(const cv::Mat &mat)
{
    if (mat.type() == CV_8UC1) {
        return QImage((uchar*)mat.data, mat.cols, mat.rows, mat.step, QImage::Format_Grayscale8).copy();
    } else if (mat.type() == CV_8UC3) {
        return QImage((uchar*)mat.data, mat.cols, mat.rows, mat.step, QImage::Format_RGB888).rgbSwapped().copy();
    } else {
        throw std::runtime_error("Unsupported image format");
    }
}

void Widget::on_pushButton_2_clicked()
{
    if (src.empty()) {
        QMessageBox::warning(this, tr("错误"), tr("请先加载图片！"));
        return;
    }

    cv::Mat gray;
    cv::cvtColor(src, gray, cv::COLOR_BGR2GRAY);
    QImage grayImg = matToQImage(gray);
    ui->label->setScaledContents(true);
    // 设置灰度图的QPixmap
    ui->label->setPixmap(QPixmap::fromImage(grayImg));
}


void Widget::on_pushButton_3_clicked()
{
    cv::Mat blurred;
    cv::blur(src, blurred, cv::Size(5, 5));

    // 将处理后的图像转换为 QImage
    QImage grayImg = matToQImage(blurred);

    // 使用 QBuffer 和 QDataStream 序列化 QImage
    QBuffer buffer;
    buffer.open(QIODevice::WriteOnly);
    QDataStream out(&buffer);
    out << grayImg;

    // 发送 QByteArray 数据
    QByteArray imageData = buffer.buffer();
    qint64 bytesWritten = m_socket.write(imageData);
    if (bytesWritten == -1) {
        // 错误处理
    }

    // 其他 UI 更新...
    ui->label->setScaledContents(true);
    ui->label->setPixmap(QPixmap::fromImage(grayImg));
}


void Widget::on_pushButton_4_clicked()
{
    cv::Mat edges;
    cv::Canny(src, edges, 50, 150, 3); // 第一个和第二个参数是阈值，第三个是Sobel算子的大小

    // 将边缘检测的结果也转换为QImage并显示（或者你可以选择只显示边缘检测结果）
    QImage edgesQImage = matToQImage(edges);
    // 你可以创建另一个QLabel来显示边缘检测结果，或者覆盖原始图片
    // 假设你有一个名为ui->labelEdges的QLabel
    ui->label_8->setScaledContents(true);
    ui->label_8->setPixmap(QPixmap::fromImage(edgesQImage));
}
void Widget::stop_connnect()
{
    //停止计时器
    m_timer.stop();
    QMessageBox::information(nullptr,"信息","连接成功");
}

void Widget::start_connect()
{
    //5秒连接
    m_timer.start(5000);
    QMessageBox::information(nullptr,"信息","服务器断开");
}
void Widget::on_pushButton_5_clicked()
{
    QString pp=ui->lineEdit->text();
     QString tt=ui->lineEdit->text();
    m_socket.connectToHost("192.168.88.177",9999);
}

