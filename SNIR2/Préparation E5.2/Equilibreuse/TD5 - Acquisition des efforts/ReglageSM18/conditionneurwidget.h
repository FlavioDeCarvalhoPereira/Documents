#ifndef CONDITIONNEURWIDGET_H
#define CONDITIONNEURWIDGET_H

#include <QWidget>
#include "mcculdaq.h"
#include <QDebug>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class ConditionneurWidget; }
QT_END_NAMESPACE

class ConditionneurWidget : public QWidget
{
    Q_OBJECT

public:
    ConditionneurWidget(QWidget *parent = nullptr);
    ~ConditionneurWidget();

private slots:
    void on_pushButtonLancerMesure_clicked();
    void onTimer_timeout();

private:
    Ui::ConditionneurWidget *ui;
    MccUldaq laCarte;
    QTimer timer;
    int numCanal;
    double tension;

};
#endif // CONDITIONNEURWIDGET_H
