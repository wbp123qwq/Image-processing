#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <QTcpSocket>
#include"QTimer"
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
 QImage matToQImage(const cv::Mat &mat);
    void onConnected();
 void timer_connect();
 void stop_connnect();
 void start_connect();
    void onError(QAbstractSocket::SocketError socketError);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Widget *ui;
    cv::Mat src;
    QTcpSocket m_socket;
    QTimer m_timer;

};
#endif // WIDGET_H
