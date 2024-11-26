#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <Qstring>
#include <QSerialPortInfo>
#include <QMessageBox>
#include <QTimer>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSerialPort *serialPort ;//定义串口指针

private slots:
    /*手动连接槽函数 */
    void manual_serialPortReadyRead();
     /*以下为mainwindow.ui文件中点击“转到槽”自动生成的函数*/

    void on_btnSerialCheck_clicked();

    void on_openBt_clicked();

    void on_clearBt_clicked();

    void on_sendBt_clicked();

    void on_btnClearSend_clicked();
    void on_chkTimSend_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
    //发送、接收字节数
    long sendNum,recvNum;
    QLabel *lblSendNum;
    QLabel *lblRecvNum;
    QLabel *lblPortState;
    void setNumOnLabel(QLabel *lbl,QString strs,long num);

    // 定时发送- 定时器
    QTimer *timsend;


};
#endif // MAINWINDOW_H
