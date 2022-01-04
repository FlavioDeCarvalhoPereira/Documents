#ifndef BANQUEMAINWINDOW_H
#define BANQUEMAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <serveurbanque.h>

QT_BEGIN_NAMESPACE
namespace Ui { class BanqueMainWindow; }
QT_END_NAMESPACE

class BanqueMainWindow : public QMainWindow
{


public:
    BanqueMainWindow(QWidget *parent = nullptr);
    ~BanqueMainWindow();


private:
    Ui::BanqueMainWindow *ui;
    ServeurBanque *leServeur;



};
#endif // BANQUEMAINWINDOW_H
