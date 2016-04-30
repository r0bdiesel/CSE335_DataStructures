#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
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

    void on_pushButton_2_clicked();

    void deleteObserver(unsigned int);


private:
    Ui::MainWindow *ui;
    std::vector<Dialog*> listeners;
    unsigned int observerID;
};

#endif // MAINWINDOW_H
