#ifndef STATE_H
#define STATE_H
#include <QGraphicsEllipseItem>
#include <QPainter>
#include <QFont>

class State : public QGraphicsEllipseItem
{

public:
    State();


    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:


};

#endif // STATE_H
