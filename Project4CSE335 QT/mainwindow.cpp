#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addrecordform.h"
#include <fstream>
#include "CDatabase.h"
#include "builder.h"
#include "Employee.h"
#include "csvbuilder.h"
#include "tabtxtbuilder.h"
#include "employeedatabaseparser.h"
#include <QStandardItemModel>

#include "BubbleSortIncreasing.h"
#include "BubbleSortDecreasing.h"
#include "EmployeeVectorSortByFirstName.h"
#include "EmployeeVectorSortByHiringYear.h"
#include "EmployeeVectorSortByLastName.h"
#include "EmployeeVectorSortBySalary.h"
#include "EmployeeVectorSortable.h"
#include <Qt>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    firstnamesorted = false;
    lastnamesorted = false;
    salarysorted = false;
    hireyearsorted = false;
    ui->tableWidget->horizontalHeader()->setSectionsClickable(true);
    connect(ui->tableWidget->horizontalHeader(),SIGNAL(sectionClicked(int)),this,SLOT(sectionClicked(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::sectionClicked(int logicalIndex){
    if(logicalIndex == 0){
        if(firstnamesorted == true){
          lastnamesorted = false;
          salarysorted = false;
          hireyearsorted = false;
          firstnamesorted = false;
          BubbleSortIncreasing bsIncreasing;
          EmployeeVectorSortByFirstName evSortedByFirstName(m_database.getAllEmployees());
          bsIncreasing.sort(&evSortedByFirstName);
          m_database.setAllEmployees(evSortedByFirstName.getAllEmployees());
        }
        else{
            lastnamesorted = false;
            salarysorted = false;
            hireyearsorted = false;
            firstnamesorted = true;
            BubbleSortDecreasing bsDecreasing;
            EmployeeVectorSortByFirstName evSortedByFirstName(m_database.getAllEmployees());
            bsDecreasing.sort(&evSortedByFirstName);
            m_database.setAllEmployees(evSortedByFirstName.getAllEmployees());
        }
            for(unsigned int i=0; i<m_database.getAllEmployees().size();i++){
                ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getFirstName())));
                ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getLastName())));
                ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getSalary())));
                ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getHiringYear())));
            }
     }
    if(logicalIndex== 1){
        if(lastnamesorted == true){
          lastnamesorted = false;
          salarysorted = false;
          hireyearsorted = false;
          firstnamesorted = false;
          BubbleSortIncreasing bsIncreasing;
          EmployeeVectorSortByLastName evSortedByLastName(m_database.getAllEmployees());
          bsIncreasing.sort(&evSortedByLastName);
          m_database.setAllEmployees(evSortedByLastName.getAllEmployees());

        }
        else{
            lastnamesorted = true;
            salarysorted = false;
            hireyearsorted = false;
            firstnamesorted = false;
            BubbleSortDecreasing bsDecreasing;
            EmployeeVectorSortByLastName evSortedByLastName(m_database.getAllEmployees());
            bsDecreasing.sort(&evSortedByLastName);
            m_database.setAllEmployees(evSortedByLastName.getAllEmployees());
        }

            for(unsigned int i=0; i<m_database.getAllEmployees().size();i++){
                ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getFirstName())));
                ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getLastName())));
                ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getSalary())));
                ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getHiringYear())));
            }
    }
    if(logicalIndex == 2){
        if(salarysorted == true){
          lastnamesorted = false;
          salarysorted = false;
          hireyearsorted = false;
          firstnamesorted = false;
          BubbleSortIncreasing bsIncreasing;
          EmployeeVectorSortBySalary evSortedBySalary(m_database.getAllEmployees());
          bsIncreasing.sort(&evSortedBySalary);
          m_database.setAllEmployees(evSortedBySalary.getAllEmployees());

        }
        else{
            lastnamesorted = false;
            salarysorted = true;
            hireyearsorted = false;
            firstnamesorted = false;
            BubbleSortDecreasing bsDecreasing;
            EmployeeVectorSortBySalary evSortedBySalary(m_database.getAllEmployees());
            bsDecreasing.sort(&evSortedBySalary);
            m_database.setAllEmployees(evSortedBySalary.getAllEmployees());
        }


            for(unsigned int i=0; i<m_database.getAllEmployees().size();i++){
                ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getFirstName())));
                ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getLastName())));
                ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getSalary())));
                ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getHiringYear())));
            }
    }
    if(logicalIndex == 3){
        if(hireyearsorted == true){
          lastnamesorted = false;
          salarysorted = false;
          hireyearsorted = false;
          firstnamesorted = false;
          BubbleSortIncreasing bsIncreasing;
          EmployeeVectorSortByHiringYear evSortedByHiringYear(m_database.getAllEmployees());
          bsIncreasing.sort(&evSortedByHiringYear);
          m_database.setAllEmployees(evSortedByHiringYear.getAllEmployees());

        }
        else{
            lastnamesorted = false;
            salarysorted = false;
            hireyearsorted = true;
            firstnamesorted = false;
            BubbleSortDecreasing bsDecreasing;
            EmployeeVectorSortByHiringYear evSortedByHiringYear(m_database.getAllEmployees());
            bsDecreasing.sort(&evSortedByHiringYear);
            m_database.setAllEmployees(evSortedByHiringYear.getAllEmployees());
        }


            for(unsigned int i=0; i<m_database.getAllEmployees().size();i++){
                ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getFirstName())));
                ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getLastName())));
                ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getSalary())));
                ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getHiringYear())));
            }
    }

}

void MainWindow::EmployeeCreated(Employee* newrecord){
    m_database.AddRecord(newrecord);
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    for(unsigned int i=0; i<m_database.getAllEmployees().size();i++){
    ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getFirstName())));
    ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getLastName())));
    ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getSalary())));
    ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getHiringYear())));
}
}

void MainWindow::on_pushButton_clicked()
{   m_recordform = new AddRecordForm(this);
    connect(m_recordform , SIGNAL(EmployeeCreated(Employee*)), this , SLOT(EmployeeCreated(Employee*)));
    m_recordform->show();
}

void MainWindow::on_actionSave_triggered()
{

        Tabbuilder tabbuilder;
        CSVbuilder csvbuilder;
        EmployeeDatabaseParser tabparser;
        EmployeeDatabaseParser csvparser;

        tabparser.setBuilder(&tabbuilder);
        csvparser.setBuilder(&csvbuilder);

        tabparser.parse(m_database);
        csvparser.parse(m_database);
        tabbuilder.setFileName("Database");
        csvbuilder.setFileName("Database");
        tabbuilder.makeFile();
        csvbuilder.makeFile();

//        cout<<tabbuilder.getExpression();
//        cout<<csvbuilder.getExpression();

    }

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}

void MainWindow::on_tableWidget_cellClicked(int row, int column)
{
                if(column == 0){
                    if(firstnamesorted == true){
                      lastnamesorted = false;
                      salarysorted = false;
                      hireyearsorted = false;
                      firstnamesorted = false;
                      BubbleSortIncreasing bsIncreasing;
                      EmployeeVectorSortByFirstName evSortedByFirstName(m_database.getAllEmployees());
                      bsIncreasing.sort(&evSortedByFirstName);
                      m_database.setAllEmployees(evSortedByFirstName.getAllEmployees());
                    }
                    else{
                        lastnamesorted = false;
                        salarysorted = false;
                        hireyearsorted = false;
                        firstnamesorted = true;
                        BubbleSortDecreasing bsDecreasing;
                        EmployeeVectorSortByFirstName evSortedByFirstName(m_database.getAllEmployees());
                        bsDecreasing.sort(&evSortedByFirstName);
                        m_database.setAllEmployees(evSortedByFirstName.getAllEmployees());
                    }
                        for(unsigned int i=0; i<m_database.getAllEmployees().size();i++){
                            ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getFirstName())));
                            ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getLastName())));
                            ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getSalary())));
                            ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getHiringYear())));
                        }
                 }
                if(column == 1){
                    if(lastnamesorted == true){
                      lastnamesorted = false;
                      salarysorted = false;
                      hireyearsorted = false;
                      firstnamesorted = false;
                      BubbleSortIncreasing bsIncreasing;
                      EmployeeVectorSortByLastName evSortedByLastName(m_database.getAllEmployees());
                      bsIncreasing.sort(&evSortedByLastName);
                      m_database.setAllEmployees(evSortedByLastName.getAllEmployees());

                    }
                    else{
                        lastnamesorted = true;
                        salarysorted = false;
                        hireyearsorted = false;
                        firstnamesorted = false;
                        BubbleSortDecreasing bsDecreasing;
                        EmployeeVectorSortByLastName evSortedByLastName(m_database.getAllEmployees());
                        bsDecreasing.sort(&evSortedByLastName);
                        m_database.setAllEmployees(evSortedByLastName.getAllEmployees());
                    }

                        for(unsigned int i=0; i<m_database.getAllEmployees().size();i++){
                            ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getFirstName())));
                            ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getLastName())));
                            ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getSalary())));
                            ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getHiringYear())));
                        }
                }
                if(column == 2){
                    if(salarysorted == true){
                      lastnamesorted = false;
                      salarysorted = false;
                      hireyearsorted = false;
                      firstnamesorted = false;
                      BubbleSortIncreasing bsIncreasing;
                      EmployeeVectorSortBySalary evSortedBySalary(m_database.getAllEmployees());
                      bsIncreasing.sort(&evSortedBySalary);
                      m_database.setAllEmployees(evSortedBySalary.getAllEmployees());

                    }
                    else{
                        lastnamesorted = false;
                        salarysorted = true;
                        hireyearsorted = false;
                        firstnamesorted = false;
                        BubbleSortDecreasing bsDecreasing;
                        EmployeeVectorSortBySalary evSortedBySalary(m_database.getAllEmployees());
                        bsDecreasing.sort(&evSortedBySalary);
                        m_database.setAllEmployees(evSortedBySalary.getAllEmployees());
                    }


                        for(unsigned int i=0; i<m_database.getAllEmployees().size();i++){
                            ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getFirstName())));
                            ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getLastName())));
                            ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getSalary())));
                            ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getHiringYear())));
                        }
                }
                if(column == 3){
                    if(hireyearsorted == true){
                      lastnamesorted = false;
                      salarysorted = false;
                      hireyearsorted = false;
                      firstnamesorted = false;
                      BubbleSortIncreasing bsIncreasing;
                      EmployeeVectorSortByHiringYear evSortedByHiringYear(m_database.getAllEmployees());
                      bsIncreasing.sort(&evSortedByHiringYear);
                      m_database.setAllEmployees(evSortedByHiringYear.getAllEmployees());

                    }
                    else{
                        lastnamesorted = false;
                        salarysorted = false;
                        hireyearsorted = true;
                        firstnamesorted = false;
                        BubbleSortDecreasing bsDecreasing;
                        EmployeeVectorSortByHiringYear evSortedByHiringYear(m_database.getAllEmployees());
                        bsDecreasing.sort(&evSortedByHiringYear);
                        m_database.setAllEmployees(evSortedByHiringYear.getAllEmployees());
                    }


                        for(unsigned int i=0; i<m_database.getAllEmployees().size();i++){
                            ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getFirstName())));
                            ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::fromStdString(m_database.getEmployee(i)->getLastName())));
                            ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getSalary())));
                            ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(m_database.getEmployee(i)->getHiringYear())));
                        }
                }
}

