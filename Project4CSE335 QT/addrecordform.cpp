#include "addrecordform.h"
#include "ui_addrecordform.h"
#include "Employee.h"
#include "CDatabase.h"
#include "mainwindow.h"

AddRecordForm::AddRecordForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddRecordForm)
{
    ui->setupUi(this);
}

AddRecordForm::~AddRecordForm()
{
    delete ui;
}
void AddRecordForm::on_pushButton_clicked()
{   const string firstname= ui->FirstName_LE->text().toStdString();
    const string lastname=ui->LastName_LE->text().toStdString();
    const int salary = ui->Salary_LE->text().toInt();
    const int hiringyear = ui->HiringYear_LE->text().toInt();

    Employee* newrecord = new Employee(firstname,lastname,salary,hiringyear);
    emit EmployeeCreated(newrecord);
    this->close();
}
