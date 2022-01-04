#ifndef BOULE_H
#define BOULE_H
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsScene>


class Boule : public QGraphicsEllipseItem
{
public:
    Boule(qreal x, qreal y, qreal width, qreal height, QGraphicsItem *parent = nullptr);
private: qreal dx;
    qreal dy;
protected:
    void advance(int step) override;
};

#endif // BOULE_H
