#include "dialog.h"
#include "ui_dialog.h"
#include <QGraphicsLineItem>
#include <QGraphicsTextItem>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    QPen blackpen(Qt::blue);
    blackpen.setWidth(2);

        scene->addLine(-500,2,250,2,blackpen);
        scene->addLine(-500,0,250,0,blackpen);
        scene->addLine(-450,-380,-450,40,blackpen);
        scene->addLine(255,0,255-20,-20,blackpen);
        scene->addLine(255,0,255-20,20,blackpen);
        scene->addLine(-450,-382,-430,-382+20,blackpen);
        scene->addLine(-450,-382,-470,-382+20,blackpen);

    ui->graphicsView->setScene(scene);

    for(int i=4;i<8;i++){
        ui->comboBox_2->addItem(QString::number(i));
    }
    ui->spinBox_5->setEnabled(false);
    ui->spinBox_6->setEnabled(false);
    ui->spinBox_7->setEnabled(false);

   /* p1 = new QGraphicsTextItem("P1");
    p1->setPos(-500,-50);
    scene->addItem(p1);

    p2 = new QGraphicsTextItem("P2");
    p2->setPos(-500,-100);
    scene->addItem(p2);

    p3 = new QGraphicsTextItem("P3");
    p3->setPos(-500,-150);
    scene->addItem(p3);

    p4 = new QGraphicsTextItem("P4");
    p4->setPos(-500,-200);
    scene->addItem(p4);*/


    ui->comboBox->addItem("FCFS");
    ui->comboBox->addItem("SJF");
    ui->comboBox->addItem("RR");
    ui->comboBox->addItem("Priority");
}

void Dialog::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    int p;
    p=ui->comboBox_2->currentText().toInt();

    if(p==5){
        ui->spinBox_5->setEnabled(true);
        ui->spinBox_6->setEnabled(false);
        ui->spinBox_7->setEnabled(false);
        ui->spinBox_12->setEnabled(true);
        ui->spinBox_13->setEnabled(false);
        ui->spinBox_14->setEnabled(false);

       /* p5 = new QGraphicsTextItem("P5");
        p5->setPos(-500,-250);
        scene->addItem(p5);*/


    }

    else if(p==6){
        ui->spinBox_5->setEnabled(true);
        ui->spinBox_6->setEnabled(true);
        ui->spinBox_7->setEnabled(false);
        ui->spinBox_12->setEnabled(true);
        ui->spinBox_13->setEnabled(true);
        ui->spinBox_14->setEnabled(false);

       /* p5 = new QGraphicsTextItem("P5");
        p5->setPos(-500,-250);
        scene->addItem(p5);

        p6 = new QGraphicsTextItem("P6");
        p6->setPos(-500,-300);
        scene->addItem(p6);*/

    }

    else if(p==7){
        ui->spinBox_5->setEnabled(true);
        ui->spinBox_6->setEnabled(true);
        ui->spinBox_7->setEnabled(true);
        ui->spinBox_12->setEnabled(true);
        ui->spinBox_13->setEnabled(true);
        ui->spinBox_14->setEnabled(true);

       /* p5 = new QGraphicsTextItem("P5");
        p5->setPos(-500,-250);
        scene->addItem(p5);

        p6 = new QGraphicsTextItem("P6");
        p6->setPos(-500,-300);
        scene->addItem(p6);

        p7 = new QGraphicsTextItem("P7");
        p7->setPos(-500,-350);
        scene->addItem(p7);*/
    }

    else{
        ui->spinBox_5->setEnabled(false);
        ui->spinBox_6->setEnabled(false);
        ui->spinBox_7->setEnabled(false);
        ui->spinBox_12->setEnabled(false);
        ui->spinBox_13->setEnabled(false);
        ui->spinBox_14->setEnabled(false);


    }
}


Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_radioButton_pressed()
{
    ui->spinBox_15->setEnabled(true);
    ui->spinBox_16->setEnabled(true);
    ui->spinBox_17->setEnabled(true);
    ui->spinBox_18->setEnabled(true);
    ui->spinBox_19->setEnabled(true);
    ui->spinBox_20->setEnabled(true);
    ui->spinBox_21->setEnabled(true);
}

void Dialog::on_pushButton_clicked()
{
    int n;
    n = ui->comboBox_2->currentText().toInt();

    int height=350;
    int width=450;

    QBrush greenBr(Qt::green);
    QPen blackpen(Qt::blue);
    blackpen.setWidth(3);


    QList<int> length;
    QList<int> enter;
    enter.append(ui->spinBox->text().toInt());
    enter.append(ui->spinBox_2->text().toInt());
    enter.append(ui->spinBox_3->text().toInt());
    enter.append(ui->spinBox_4->text().toInt());
        if(n==5)
    enter.append(ui->spinBox_5->text().toInt());
        else if(n==6){
    enter.append(ui->spinBox_5->text().toInt());
    enter.append(ui->spinBox_6->text().toInt());}
        else if(n==7){
    enter.append(ui->spinBox_5->text().toInt());
    enter.append(ui->spinBox_6->text().toInt());
    enter.append(ui->spinBox_7->text().toInt());
        }


    length.append(ui->spinBox_8->text().toInt());
    length.append(ui->spinBox_9->text().toInt());
    length.append(ui->spinBox_10->text().toInt());
    length.append(ui->spinBox_11->text().toInt());
    if(n==5)
    length.append(ui->spinBox_12->text().toInt());
    else if(n==6){
    length.append(ui->spinBox_12->text().toInt());
    length.append(ui->spinBox_13->text().toInt());}
    else if(n==7){
    length.append(ui->spinBox_12->text().toInt());
    length.append(ui->spinBox_13->text().toInt());
    length.append(ui->spinBox_14->text().toInt());
    }

    float space=height/n;
    float sum=0;

    for(int i=0;i<n;i++){
        sum=sum+length.at(i);
    }

    float x,y;
    x=-450;
    y=-450;

    int duration;
    duration=width/sum;
    int min,minI;
    for(int i=0;i<n;i++){
        min = *std::min_element(enter.begin(), enter.end());
        minI=enter.indexOf(min);
        //qDebug()<<"Broj min:"<< minI;
        scene->addRect(x,y+space*(minI+1),duration*length.at(i),space,blackpen,greenBr);
        enter.replace(minI,10);
        x+=duration*length.at(i);

        QPen LinePen;
        LinePen.setStyle(Qt::DashLine);
        LinePen.setColor(Qt::blue);
        LinePen.setWidth(1);
        scene->addLine(x,-380,x,0,LinePen);

        QString str("P %1");
        QString str1=str.arg(QString::number(min));


        p1=scene->addText(str1);
        p1->setPos(-500,y+space*(minI+1));

      /*  p1 = new QGraphicsTextItem("P");
        p1->setPos(-500,y+space*(minI+1));
        scene->addItem(p1);*/




    }

   }


