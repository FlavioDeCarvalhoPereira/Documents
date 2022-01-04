#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    player= new QMediaPlayer;

    connect(player,&QMediaPlayer::stateChanged,this,&Widget::onQMediaPlayer_stateChanged);
    connect(player,QOverload<QMediaPlayer::Error>::of(&QMediaPlayer::error),this,&Widget::onQMediaPlayer_error);


    connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(PositionChanged(qint64)));
    connect(player, SIGNAL(durationChanged(qint64)), this, SLOT(DurationChanged(qint64)));






}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonPLayExternalSound_clicked()
{
    player->setMedia(QUrl::fromLocalFile(nomFichier));
    player->setVolume(100);
    player->play();
}

void Widget::on_pushButtonChooseFile_clicked()
{
    nomFichier= QFileDialog::getOpenFileName();
}

void Widget::onQMediaPlayer_stateChanged(QMediaPlayer::State state)
{
    QString etat;
    switch(state){
    case QMediaPlayer::StoppedState:etat="stopped";break;
    case QMediaPlayer::PlayingState:etat="playing";break;
    case QMediaPlayer::PausedState:etat="paused";break;
    }
    qDebug()<<etat;
}

void Widget::onQMediaPlayer_error(QMediaPlayer::Error error)
{
    qDebug()<<player->errorString();
}


void Widget::DurationChanged(qint64 position)
{
    ui->progressBar->setRange(0,position);
    totalTime=new QTime(0,(position/60000)%60,(position/1000)%60);

}

void Widget::PositionChanged(qint64 position)
{

    ui->progressBar->setValue(position);
    currentTime=new QTime(0,(position/60000)%60,(position/1000)%60);//constructor current time (hours, minutes, seconds and milliseconds)
    QString text=currentTime->toString("mm:ss");
    ui->progressBar->setFormat(text);



}


