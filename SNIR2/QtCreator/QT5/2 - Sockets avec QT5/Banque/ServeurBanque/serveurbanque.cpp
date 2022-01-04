#include "serveurbanque.h"
#include <ui_banquemainwindow.h>
#include <QMessageBox>
#include <QBuffer>


ServeurBanque::ServeurBanque(QObject *parent) :
     QTcpServer(parent)

{
    if (!QObject::connect(this,&ServeurBanque::newConnection,this,&ServeurBanque::onServeurBanque_NewConnection)){
        QMessageBox msgbox;
        msgbox.setText("erreur association signal/slot");
        msgbox.exec();
    }

}

ServeurBanque::~ServeurBanque()
{

}

void ServeurBanque::Start()
{
    if(!this->listen(QHostAddress::Any,8888)){
        QMessageBox msgbox;
        msgbox.setText("erreur listen "+this->errorString());
        msgbox.exec();
    }
}

void ServeurBanque::Stop()
{
    this->close();
}

void ServeurBanque::onServeurBanque_NewConnection()
{
    CompteClient * client;
    while(hasPendingConnections()){
        client = static_cast<CompteClient * >(this->nextPendingConnection());
        connect(client,&QTcpSocket::readyRead,this,&ServeurBanque::onCompteClient_readyRead);
        connect(client,&QTcpSocket::disconnected,this,&ServeurBanque::onCompteCLient_disconnected);
        lesConnexionsClients.append(client);
        qDebug() <<"client connecté";
        EnvoyerMessage("Entrez votre numero de compte",client);
    }
}

void ServeurBanque::EnvoyerMessage(QString msg, CompteClient *client)
{
    quint16 taille = 0;
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);
    //association du tampon au flux de sortie
    QDataStream out(&tampon);
    //construction de la trame
    out<<taille<<msg;
    //calcul de la taille de la trame
    taille = tampon.size()-sizeof (taille);
    //placement sur la premiere position du flux pour pouvoir modifier la taille
    tampon.seek(0);
    //modification de la taille de la trame
    out << taille;
    //envoie du QByteArray du tampon via la socket
    client->write(tampon.buffer());
    //lesConnexionsClients.at(lesConnexionsClients.indexOf(client))->write(msg.toLatin1());
}

void ServeurBanque::onCompteCLient_disconnected()
{
    CompteClient *client=(CompteClient*)sender();
    if (!client)
    {
        QMessageBox msg;
        msg.setText("erreur deconnexion : "+client->errorString());
        msg.exec();
    }
    else
    {
        lesConnexionsClients.removeOne(client);
        client->deleteLater();
    }
}

void ServeurBanque::onCompteClient_readyRead()
{

}
