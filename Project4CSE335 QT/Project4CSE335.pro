#-------------------------------------------------
#
# Project created by QtCreator 2016-04-02T01:51:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project4CSE335
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    addrecordform.cpp

HEADERS  += mainwindow.h \
    addrecordform.h \
    Employee.h \
    CDatabase.h \
    employeedatabaseparser.h \
    builder.h \
    csvbuilder.h \
    tabtxtbuilder.h \
    BubbleSortDecreasing.h \
    BubbleSortIncreasing.h \
    BubbleSortTemplate.h \
    EmployeeVectorSortable.h \
    EmployeeVectorSortByFirstName.h \
    EmployeeVectorSortByHiringYear.h \
    EmployeeVectorSortByLastName.h \
    EmployeeVectorSortBySalary.h \
    SortableVector.h

FORMS    += mainwindow.ui \
    addrecordform.ui
