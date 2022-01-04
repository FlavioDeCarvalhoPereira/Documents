#include "capot.h"
#include "mcculdaq.h"

Capot::Capot(MccUldaq & _laCarte, int _numDio, QObject *parent) :
    QObject(parent),
    numDio(_numDio),
    laCarte(_laCarte)
{
    QTimer timerCapot;
    laCarte.ulDConfigBit(numDio, DD_INPUT);
    laCarte.ulDBitIn(numDio, etatCapot);
    connect(&timerCapot, &QTimer::timeout, this, &Capot::onTimerCapot_timeout);
    timerCapot.start(TIMER_CAPOT);
}

void Capot::onTimerCapot_timeout()
{
    bool etatCourant;
    laCarte.ulDBitIn(numDio, etatCourant);
    
   if(etatCapot != etatCourant){
       EtatCapotChange();
   }
}
