#include "state.h"

State::State()
{

}

void State::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    QBrush yellowBrush(Qt::yellow);
    QPen blackPen(Qt::black);
    QBrush grayBrush(Qt::gray);

    painter->setBrush(yellowBrush);

    painter->drawEllipse(-360,-240,100,100);
    painter->drawEllipse(-200,-50,100,100);
    painter->drawEllipse(-50,140,100,100);
    painter->drawEllipse(130,-50,100,100);
    painter->drawEllipse(260,-240,100,100);


    painter->setPen(blackPen);
    blackPen.setWidth(5);
    painter->setBrush(grayBrush);


    //START
    painter->drawRect(-345,-180,15,15);
    painter->drawRect(-330,-180,15,15);
    painter->drawRect(-315,-180,15,15);
    painter->drawRect(-300,-180,15,15);
    painter->drawRect(-285,-180,15,15);

    //READY
    painter->drawRect(-185,10,15,15);
    painter->drawRect(-170,10,15,15);
    painter->drawRect(-155,10,15,15);
    painter->drawRect(-140,10,15,15);
    painter->drawRect(-125,10,15,15);

    //RUN
    painter->drawRect(148,10,15,15);
    painter->drawRect(163,10,15,15);
    painter->drawRect(178,10,15,15);
    painter->drawRect(193,10,15,15);
    painter->drawRect(208,10,15,15);

    //WAIT
    painter->drawRect(-33,200,15,15);
    painter->drawRect(-18,200,15,15);
    painter->drawRect(-5,200,15,15);
    painter->drawRect(5,200,15,15);
    painter->drawRect(20,200,15,15);

    //STOP
    painter->drawRect(277,-180,15,15);
    painter->drawRect(292,-180,15,15);
    painter->drawRect(305,-180,15,15);
    painter->drawRect(318,-180,15,15);
    painter->drawRect(331,-180,15,15);


    QFont stack;
    stack.setBold(true);
    painter->setFont(stack);

    painter->drawText(-330,-200,"START");
    painter->drawText(-165,-10,"READY");
    painter->drawText(165,-10,"RUN");
    painter->drawText(-10,180,"WAIT");
    painter->drawText(295,-200,"STOP");



}



