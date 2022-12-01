#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QtCore>
#include<QtGui>
#include<QGraphicsAnchor>
#include<QGraphicsTextItem>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_radioButton_pressed();
    void on_pushButton_clicked();
    void on_comboBox_2_currentTextChanged(const QString &arg1);

private:
    Ui::Dialog *ui;
    QGraphicsScene *scene;
    QGraphicsTextItem *p1;
    QGraphicsTextItem *p2;
    QGraphicsTextItem *p3;
    QGraphicsTextItem *p4;
    QGraphicsTextItem *p5;
    QGraphicsTextItem *p6;
    QGraphicsTextItem *p7;
};
#endif // DIALOG_H
