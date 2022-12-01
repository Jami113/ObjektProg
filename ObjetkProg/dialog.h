#ifndef DIALOG_H
#define DIALOG_H
#include "state.h"
#include "transition.h"
#include <QDialog>
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QFont>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();




private:
    Ui::Dialog *ui;
    QGraphicsScene *scene;
    State *state;
    Transition *Transition1;
    Transition *Transition2;
    Transition *Transition3;
    Transition *Transition4;
    Transition *Transition5;
    Transition *Transition6;
};

#endif // DIALOG_H
