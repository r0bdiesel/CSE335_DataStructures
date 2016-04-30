#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),this,SIGNAL(valueChanged(int)));
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::setValue(int progress){
    ui->horizontalSlider->setValue(progress);
}
void Dialog::setObserverID(int ID){
    observerID=ID;
}

void Dialog::on_pushButton_clicked()
{
    emit observerDeleted(observerID);
}

