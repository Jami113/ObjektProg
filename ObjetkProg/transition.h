#ifndef TRANSITION_H
#define TRANSITION_H
#include <QGraphicsEllipseItem>
#include <QPainter>
#include <QPainterPath>
#include <QFont>
#include <QGraphicsPolygonItem>
#include <QDebug>


class Transition : public QObject,public QGraphicsPolygonItem
{
//Q_OBJECT
public:
    Transition();

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void mousePressEvent(QGraphicsSceneMouseEvent *e);



private:

    QPolygonF Arrow;




};

#endif // TRANSISTION_H
