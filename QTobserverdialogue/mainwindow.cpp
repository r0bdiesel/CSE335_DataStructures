#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setMaximum(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Dialog* newListener = new Dialog(this);
    listeners.push_back(newListener);
    newListener->show();
connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),newListener,SLOT(setValue(int)));
}

void MainWindow::on_pushButton_2_clicked()
{
    Dialog* lastListener=listeners.back();
    lastListener->close();
    listeners.pop_back();
}
