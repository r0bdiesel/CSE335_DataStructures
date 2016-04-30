#include "mainwindow.h"
#include <QApplication>
#include "Employee.h"
#include "CDatabase.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
