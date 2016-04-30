#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void setObserverID(int);
signals:
    void valueChanged(int);
    void observerDeleted(unsigned int);
public slots:
    void setValue(int);
private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    unsigned int observerID;
};

#endif // DIALOG_H
