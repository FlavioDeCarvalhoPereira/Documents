#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMediaPlayer>
#include <QString>
#include <QFileDialog>
#include <QDebug>
#include <QProgressBar>
#include <QTime>
#include <QDateTime>
#include "QFileDialog"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QMediaPlayer *player;
    QString nomFichier;
    QTime *currentTime;
     QTime *totalTime;

private slots :
    void on_pushButtonPLayExternalSound_clicked();
    void on_pushButtonChooseFile_clicked();

    void onQMediaPlayer_stateChanged(QMediaPlayer::State state);
    void onQMediaPlayer_error(QMediaPlayer::Error error);


    void DurationChanged(qint64 position);
    void PositionChanged(qint64 position);
};
#endif // WIDGET_H
