#include "boule.h"

Boule::Boule(qreal x, qreal y, qreal width, qreal height, QGraphicsItem *parent):
    QGraphicsEllipseItem(x,y,width,height,parent),
    dx(2),
    dy(2)
{

}

void Boule::advance(int step)
{
    moveBy(dx,dy);
    qreal largerBoule=rect().width();
    qreal largeurScene=scene()->width();

    if (x()<=2){
        dx=2;
    }

    if(x()>=(largeurScene-largerBoule)){
        dx=-2;
    }

    if(y()<=2){
        dy=2;
    }
    if(y()>=scene()->height()-rect().height()){
        dy=-2;
    }
}
