#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);
    QColor bleu(0,255,255);
    QGraphicsScene *maScene = new QGraphicsScene();
    maScene->setSceneRect(0,0,500,350);

    /* QGraphicsRectItem *rectangle;
    rectangle = new QGraphicsRectItem(10,20,200,100);
    QBrush interieurRect(bleu);
    QPen countourRect(bleu);
    rectangle->setBrush(interieurRect);
    rectangle->setPen(countourRect);
*/
    QGraphicsRectItem *rectangleRad;
        rectangleRad = new QGraphicsRectItem(10,20,200,100);

    QGraphicsEllipseItem *ellipse;
    QGraphicsEllipseItem *rond;
    QGraphicsEllipseItem *rondGradient;
    QPolygon triangleEnConstruction;
    QPolygon etoileEnConstructon;
    QColor vert(0,255,0);
    QColor violet(255,0,255);
    QColor rouge(255,0,0);
    QColor noir(0,0,0);

    etoileEnConstructon.setPoints(10,55,1,67,37,107,38,76,59,87,95,55,73,23,94,35,61,2,37,41,38);

    triangleEnConstruction.setPoints(3,33,0,65,47,1,46);
    rond = new QGraphicsEllipseItem(250,20,120,120);
    rondGradient = new QGraphicsEllipseItem(100,100,120,120);
    ellipse = new QGraphicsEllipseItem(150,178,120,50);
    QGraphicsPolygonItem *triangle=new QGraphicsPolygonItem(triangleEnConstruction);
    QGraphicsPolygonItem *etoile=new QGraphicsPolygonItem(etoileEnConstructon);
    QGraphicsPolygonItem *etoileNoir=new QGraphicsPolygonItem(etoileEnConstructon);



    QRadialGradient rondRadint(20,20,300);
    QLinearGradient rectDegrader (0,0,100,100);
    rectDegrader.setColorAt(0,bleu);
    rectDegrader.setColorAt(1,QColor(255,255,255));
    rondRadint.setColorAt(0,vert);
    rondRadint.setColorAt(1,bleu);
    QBrush  inerieurRond(vert);
    QBrush  vertDiag(vert);
    vertDiag.setStyle(Qt::BDiagPattern);
   QBrush rectRadBrush(rectDegrader);
   // bleuRadiant.setStyle(Qt::RadialGradientPattern);
    QBrush interieurEllipse(rouge);
    QPen   contourViolet(violet);
    contourViolet.setWidth(10);
    QPen   contourRouge(rouge);

    rondGradient->setBrush(rondRadint);
    rondGradient->setFlags(QGraphicsItem::ItemIsMovable);
    rectangleRad->setBrush(rectRadBrush);
    rectangleRad->setFlags(QGraphicsItem::ItemIsMovable);
    etoileNoir->setBrush(noir);
    etoile->setBrush(vertDiag);
    triangle->setBrush(bleu);
    triangle->setPen(rouge);
    ellipse->setBrush(interieurEllipse);
    ellipse->setPen(contourRouge);
    rond->setBrush(inerieurRond);
    rond->setPen(contourViolet);
    maScene->addItem(rectangleRad);
    maScene->addItem(rond);
    maScene->addItem(ellipse);
    maScene->addItem(triangle);
    maScene->addItem(etoileNoir);
    maScene->addItem(etoile);
    maScene->addItem(rondGradient);

    ui->maVue->fitInView(maScene->sceneRect(),Qt::KeepAspectRatio);
    ui->maVue->setScene(maScene);
    ui->maVue->show();
}

Widget::~Widget()
{
    delete ui;
}

