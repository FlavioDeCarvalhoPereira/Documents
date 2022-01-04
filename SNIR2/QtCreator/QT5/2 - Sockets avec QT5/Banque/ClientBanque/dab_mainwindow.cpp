#include "dab_mainwindow.h"
#include "ui_dab_mainwindow.h"

DAB_MainWindow::DAB_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DAB_MainWindow)
{
    ui->setupUi(this);
    
    ui->groupBoxOperation->setEnabled(false);
    
    socketClientBanque = new QTcpSocket ;
    
    connect(socketClientBanque,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),this,&DAB_MainWindow::onQTcpSocket_error);
    connect(socketClientBanque,&QTcpSocket::connected,this,&DAB_MainWindow::onQTcpSocket_connected);
    connect(socketClientBanque,&QTcpSocket::disconnected,this,&DAB_MainWindow::onQTcpSocket_disconnected);
    connect(socketClientBanque,&QTcpSocket::readyRead,this,&DAB_MainWindow::onQTcpSocket_readyRead);
}

DAB_MainWindow::~DAB_MainWindow()
{
    delete ui;
}

void DAB_MainWindow::onQTcpSocket_connected()
{
    ui->listWidget->addItem("Connected");
            
            ui->pushButtonConnexion->setText("Deconnexion");
    ui->lineEditAdresse->setEnabled(false);
    ui->lineEditPort->setEnabled(false);
    ui->groupBoxOperation->setEnabled(true);
}

void DAB_MainWindow::onQTcpSocket_readyRead()
{
    quint16 taille=0;
    QString message;
    
    if (socketClientBanque->bytesAvailable() >= (quint64)sizeof (taille))
    {
        QDataStream in(socketClientBanque);
        in >> taille;
        
        if (socketClientBanque->bytesAvailable() >= (quint64)taille)
        {
            in >> message;
            ui->lineEditMessageBanque->setText(message);
        }
    }
}

void DAB_MainWindow::onQTcpSocket_disconnected()
{
    ui->listWidget->addItem("disconnected");
            
            ui->pushButtonConnexion->setText("Connexion");
    ui->lineEditAdresse->setEnabled(true);
    ui->lineEditPort->setEnabled(true);
    ui->groupBoxOperation->setEnabled(false);
}

void DAB_MainWindow::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->listWidget->addItem(socketClientBanque->errorString());
}

void DAB_MainWindow::on_pushButtonConnexion_clicked()
{
    if (ui->pushButtonConnexion->text()=="Connexion")
    {
        ui->listWidget->clear();
        socketClientBanque->connectToHost( ui->lineEditAdresse->text() , ui->lineEditPort->text().toInt() );
    }else
    {
        socketClientBanque->disconnectFromHost();
    }
}

void DAB_MainWindow::on_pushButtonEnvoi_clicked()
{
    quint16 taille=0;
    QChar commande;
    if ( ui->radioButtonDepot->isChecked())
    {
        commande='D';
        qDebug() << this << "D";
        //socketClientBanque->write(commande.toLatin1());
    }
    if ( ui->radioButtonSolde->isChecked())
    {
        commande='S';
        qDebug() << this << "S";
    }
    if ( ui->radioButtonRetrait->isChecked())
    {
        commande='R';
        qDebug() << this << "R";
    }
}

void DAB_MainWindow::on_pushButtonNumCompte_clicked()
{
    quint16 taille=0;
    QChar commande='N';
    int compte= ui->lineEditNumCompte->text().toInt();
    if ( compte > 0 ){
        QBuffer tampon;
        tampon.open(QIODevice::WriteOnly);
        QDataStream out(&tampon);
        out<<taille<<commande<<compte;
        taille=tampon.size()-sizeof (taille);
        tampon.seek(0);
        out<<taille;
        qDebug() << this << commande;
        socketClientBanque->write(tampon.buffer());
    }
}
