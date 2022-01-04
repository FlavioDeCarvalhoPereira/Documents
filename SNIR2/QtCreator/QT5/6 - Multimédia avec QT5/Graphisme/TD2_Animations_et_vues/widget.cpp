#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonAnimation_clicked()
{
    maScene.setSceneRect(0,0,440,240);
    maBoule = new Boule(0,0,10,10);
    maBoule->setPos(120,20);
    maScene.addItem(maBoule);
    ui->graphicsView->fitInView(maScene.sceneRect(),Qt::KeepAspectRatio);
    ui->graphicsView->setScene(&maScene);

    ui->graphicsView2->fitInView(maScene.sceneRect(),Qt::KeepAspectRatio);
    ui->graphicsView2->setScene(&maScene);

    ui->graphicsView3->fitInView(maScene.sceneRect(),Qt::KeepAspectRatio);
    ui->graphicsView3->setScene(&maScene);

    ui->graphicsView4->fitInView(maScene.sceneRect(),Qt::KeepAspectRatio);
    ui->graphicsView4->setScene(&maScene);
    connect(&timer,&QTimer::timeout,&maScene,&QGraphicsScene::advance);
    timer.start(30);
}
