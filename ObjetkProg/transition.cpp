#include "transition.h"

Transition::Transition()
{
    Arrow<<QPoint(0,44)
         <<QPoint(60,44)
         <<QPoint(60,34)
         <<QPoint(100,46)
         <<QPoint(60,64)
         <<QPoint(60,54)
         <<QPoint(0,54)
         <<QPoint(0,44);
         setPolygon(Arrow);
}

void Transition::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QBrush greenBrush(Qt::green);
    QPen blackPen(Qt::black);
    painter->setBrush(greenBrush);
    painter->setPen(blackPen);
    blackPen.setWidth(9);
    painter->drawPolygon(Arrow);
}

void Transition::mousePressEvent(QGraphicsSceneMouseEvent *e)
{
  qDebug()<<"Transition";
}

