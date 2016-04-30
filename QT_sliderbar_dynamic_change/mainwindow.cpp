#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalScrollBar->setMinimum(0);
    ui->horizontalScrollBar->setMaximum(100);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->label_2->setText("0");
    ui->progressBar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}
