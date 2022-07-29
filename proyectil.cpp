#include "proyectil.h"

Proyectil::Proyectil(double posX, double posY)
{
    this->posX = posX;
    this->posY = posY;
    QGraphicsRectItem(posX,posY,10,10);
}

void Proyectil::advance(int phase){
    if(!phase) return;
    setPos(mapToParent((posX), (posY)));
}

void Proyectil::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    QRectF rect = this->rect();
    painter->drawRect(rect);
}
