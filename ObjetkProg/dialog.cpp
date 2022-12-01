#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    scene=new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    scene->setBackgroundBrush(Qt::blue);

    state=new State();
    scene->addItem(state);


    Transition1=new Transition();
    Transition1->setRotation(50);
    Transition1->setPos(-225,-150);
    scene->addItem(Transition1);

    Transition2=new Transition();
    Transition2->setRotation(0);
    Transition2->setPos(-40,-30);
    scene->addItem(Transition2);

    Transition3=new Transition();
    Transition3->setRotation(310);
    Transition3->setPos(180,-90);
    scene->addItem(Transition3);

    Transition4=new Transition();
    Transition4->setRotation(180);
    Transition4->setPos(60,30);
    scene->addItem(Transition4);

    Transition5=new Transition();
    Transition5->setRotation(230);
    Transition5->setPos(-95,160);
    scene->addItem(Transition5);

    Transition6=new Transition();
    Transition6->setRotation(130);
    Transition6->setPos(160,90);
    scene->addItem(Transition6);

}

Dialog::~Dialog()
{
    delete ui;
}






