#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    observerID=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
Dialog* newlistener=new Dialog(this);
listeners.push_back(newlistener);
newlistener->show();
newlistener->setObserverID(observerID);
observerID++;
connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),newlistener,SLOT(setValue(int)));
connect(newlistener,SIGNAL(valueChanged(int)),ui->horizontalSlider,SLOT(setValue(int)));
connect(newlistener,SIGNAL(observerDeleted(uint)),this,SLOT(deleteObserver(uint)));
}

void MainWindow::on_pushButton_2_clicked()
{
 Dialog* lastlistener=listeners.back();
 lastlistener->close();
 listeners.pop_back();
}
void MainWindow::deleteObserver(unsigned int id){
    observerID--;
    ui->label->setText("the"+QString::number(id+1)+"th observer is deleted");
}
