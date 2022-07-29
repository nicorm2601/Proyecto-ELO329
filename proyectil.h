#ifndef PROYECTIL_H
#define PROYECTIL_H

#include <QPainter>
#include <QGraphicsRectItem>
#include <QGraphicsScene>

class Proyectil : public QGraphicsRectItem
{
public:
    Proyectil(qreal posX, qreal posY);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    double posX;
    double posY;

protected:
    void advance(int phase);

};

#endif // PROYECTIL_H
