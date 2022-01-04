#ifndef DAB_MAINWINDOW_H
#define DAB_MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QBuffer>
#include <QIODevice>

QT_BEGIN_NAMESPACE
namespace Ui { class DAB_MainWindow; }
QT_END_NAMESPACE

class DAB_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    DAB_MainWindow(QWidget *parent = nullptr);
    ~DAB_MainWindow();

private slots:

    void onQTcpSocket_connected();
    void onQTcpSocket_readyRead();
    void onQTcpSocket_disconnected();
    void onQTcpSocket_error(QAbstractSocket::SocketError socketError);

    void on_pushButtonConnexion_clicked();

    void on_pushButtonEnvoi_clicked();

    void on_pushButtonNumCompte_clicked();

private:
    Ui::DAB_MainWindow *ui;
    QTcpSocket *socketClientBanque;
};
#endif // DAB_MAINWINDOW_H
