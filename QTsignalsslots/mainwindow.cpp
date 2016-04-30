#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "alexlabel.h"
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
connect(ui->lineEditFamily,SIGNAL(textChanged(QString)),ui->labelfox,SLOT(setFontByText(QString)));

connect(ui->lineEditFamily,SIGNAL(textChanged(QString)),ui->fontComboBox,SLOT(setCurrentText(QString)));

connect(ui->fontComboBox,SIGNAL(currentFontChanged(QFont)),ui->labelfox,SLOT(setFont(QFont)));

connect(ui->fontComboBox,SIGNAL(currentFontChanged(QFont)),ui->lineEditFamily,SLOT(showFont(QFont)));

connect(ui->checkBoxBold,SIGNAL(clicked(bool)),ui->labelfox,SLOT(modifyFontByCheckboxBold(bool)));
connect(ui->checkBoxItalic,SIGNAL(clicked(bool)),ui->labelfox,SLOT(modifyFontByCheckboxItalic(bool)));
connect(ui->checkBoxUnderline,SIGNAL(clicked(bool)),ui->labelfox,SLOT(modifyFontByCheckboxUnderline(bool)));

connect(ui->lineEditSize,SIGNAL(textChanged(QString)),ui->labelfox,SLOT(modifyFontByCheckboxSize(QString)));

}

void MainWindow::getFont(QFont qf){
    ui->labelfox->setFont(qf);
}

MainWindow::~MainWindow()
{
    delete ui;
}
