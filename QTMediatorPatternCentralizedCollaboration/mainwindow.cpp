#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){

ui->setupUi(this);
connect(ui->lineEditFamily,SIGNAL(editingFinished()),ui->lineEditFamily,SLOT(myEditingFinished()));
connect(ui->lineEditFamily,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

connect(ui->fontComboBox,SIGNAL(currentFontChanged(QFont)),ui->fontComboBox,SLOT(myCurrentFontChanged(QFont)));
connect(ui->fontComboBox,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

connect(ui->checkBoxBold,SIGNAL(stateChanged(int)),ui->checkBoxBold,SLOT(myStateChanged(int)));
connect(ui->checkBoxBold,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

connect(ui->checkBoxItalic,SIGNAL(stateChanged(int)),ui->checkBoxItalic,SLOT(myStateChanged(int)));
connect(ui->checkBoxItalic,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));


connect(ui->checkBoxUnderline,SIGNAL(stateChanged(int)),ui->checkBoxUnderline,SLOT(myStateChanged(int)));
connect(ui->checkBoxUnderline,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

connect(ui->lineEditSize,SIGNAL(editingFinished()),ui->lineEditSize,SLOT(myEditingFinished()));
connect(ui->lineEditSize,SIGNAL(iChanged(QObject*)),this,SLOT(actByYourChange(QObject*)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::actByYourChange(QObject* senderObj){
    if(senderObj == ui->lineEditFamily){
        ui->labelfox->setFont(QFont(ui->lineEditFamily->text()));
        ui->fontComboBox->setCurrentFont(QFont(ui->lineEditFamily->text()));
    }
    else if (senderObj ==ui->fontComboBox){
        ui->labelfox->setFont(ui->fontComboBox->currentFont());
        ui->lineEditFamily->setText(ui->fontComboBox->currentFont().family());
    }
    else if(senderObj==ui->checkBoxBold){
        QFont font=ui->labelfox->font();
        font.setBold(ui->checkBoxBold->isChecked());
        ui->labelfox->setFont(font);
    }
    else if(senderObj==ui->checkBoxItalic){
        QFont font=ui->labelfox->font();
        font.setItalic(ui->checkBoxItalic->isChecked());
        ui->labelfox->setFont(font);
    }
    else if(senderObj==ui->checkBoxUnderline){
        QFont font=ui->labelfox->font();
        font.setUnderline(ui->checkBoxUnderline->isChecked());
        ui->labelfox->setFont(font);
    }
    else if(senderObj==ui->lineEditSize){
        QFont font=ui->labelfox->font();
        font.setPointSize(ui->lineEditSize->text().toInt());
        ui->labelfox->setFont(font);
    }

}









