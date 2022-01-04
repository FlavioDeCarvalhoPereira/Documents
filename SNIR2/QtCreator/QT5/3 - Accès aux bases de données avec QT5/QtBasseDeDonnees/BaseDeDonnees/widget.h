#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private slots:
    void on_comboBoxRegions_currentIndexChanged(int index);

    void on_pushButtonNomDep_clicked();

    void on_comboBoxDepartements_currentIndexChanged(int index);

private:
    Ui::Widget *ui;
    QSqlDatabase bd ;

};
#endif // WIDGET_H
