#ifndef ADDRECORDFORM_H
#define ADDRECORDFORM_H

#include <QDialog>
#include "Employee.h"
namespace Ui {
class AddRecordForm;
}

class AddRecordForm : public QDialog
{
    Q_OBJECT

public:
    explicit AddRecordForm(QWidget *parent = 0);
    ~AddRecordForm();
signals:
    void EmployeeCreated(Employee*);
private slots:
    void on_pushButton_clicked();

private:
    Ui::AddRecordForm *ui;
};

#endif // ADDRECORDFORM_H
