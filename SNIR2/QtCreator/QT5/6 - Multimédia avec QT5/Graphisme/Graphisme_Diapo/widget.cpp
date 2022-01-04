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


void Widget::on_pushButtonDessiner_clicked()
{
QGraphicsScene *maScene = new QGraphicsScene();
maScene->setSceneRect(0,0,400,300);
QPolygon poly1;
QGraphicsLineItem *ligne;
QGraphicsPolygonItem *polyI;
QGraphicsTextItem *text;
poly1.setPoints(4,10,10,100,20,50,50,30,100);
ligne = new QGraphicsLineItem(0,0,400,360);
polyI=new QGraphicsPolygonItem(poly1);
text=new QGraphicsTextItem("bonjour");
text->setPos(50,100);
text->setFlag(QGraphicsItem::ItemIsMovable);
maScene->addItem(text);
maScene->addItem(polyI);
maScene->addItem(ligne);
ui->maVue->fitInView(maScene->sceneRect(),Qt::KeepAspectRatio);
ui->maVue->setScene(maScene);
ui->maVue->show();






}
