#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_actionSave_triggered();
    void EmployeeCreated(Employee*);
    void on_pushButton_2_clicked();
    void on_tableWidget_cellClicked(int row, int column);
    void sectionClicked(int);

private:
    Ui::MainWindow *ui;
    AddRecordForm *m_recordform;
    CDatabase m_database;
    bool firstnamesorted;
    bool lastnamesorted;
    bool salarysorted;
    bool hireyearsorted;
};

#endif // MAINWINDOW_H
