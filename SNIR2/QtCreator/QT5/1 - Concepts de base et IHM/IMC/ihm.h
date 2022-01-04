#ifndef IMC_H
#define IMC_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Imc; }
QT_END_NAMESPACE

class IHM : public QWidget
{
    Q_OBJECT

public:
    IHM(QWidget *parent = nullptr);
    ~IHM();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButtonLorentz_clicked();

    void on_pushButtonLorentzAge_clicked();

private:
    Ui::Imc *ui;

    void afficherInfos();
        double poids;
        double taille;
        QString nom;
        QString prenom;
        int age;
        static const int NBIMC=6;
        static const int NBCORPULENCE=7;
};
#endif // IMC_H
