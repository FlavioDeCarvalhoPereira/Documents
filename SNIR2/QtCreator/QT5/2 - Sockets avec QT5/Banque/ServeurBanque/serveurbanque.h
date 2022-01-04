#ifndef SERVEURBANQUE_H
#define SERVEURBANQUE_H

#include <QList>
#include <QTcpServer>
#include <compteclient.h>


class ServeurBanque : public QTcpServer
{
    Q_OBJECT
public:
    ServeurBanque(QObject *parent = nullptr);
    ~ServeurBanque();
    void  Start();
    void Stop();
    void EnvoyerMessage(QString msg, CompteClient *client);
private slots:
    QList<CompteClient*> lesConnexionsClients;

    void onServeurBanque_NewConnection();
    void onCompteCLient_disconnected();
    void onCompteClient_readyRead();
};

#endif // SERVEURBANQUE_H
