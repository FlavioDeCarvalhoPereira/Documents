#ifndef CAPOT_H
#define CAPOT_H

#include <QObject>
#include <QTimer>
#define TIMER_CAPOT 500

class MccUldaq;

class Capot : public QObject
{
    Q_OBJECT
public:
    Capot(MccUldaq & _laCarte, int _numDio, QObject *parent = nullptr);
    void onTimerCapot_timeout();

private:
    bool etatCapot;
    int numDio;
    MccUldaq & laCarte;

signals:
    void EtatCapotChange (bool _etat);
};

#endif // CAPOT_H
