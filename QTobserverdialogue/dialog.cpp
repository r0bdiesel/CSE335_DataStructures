#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::setValue(int progress){
    ui->progressBar->setValue(progress);
}

void Dialog::on_pushButton_clicked()
{

}
