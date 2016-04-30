#ifndef ROBLINEEDIT
#define ROBLINEEDIT

#include <QLineEdit>

class RobLineEdit:public QLineEdit{
    Q_OBJECT

public:
    RobLineEdit(const QString& qstring):QLineEdit(qstring){};
    RobLineEdit(QWidget* qw):QLineEdit(qw){};
signals:
    void iChanged(QObject*); //my own signal
public slots:
    void myEditingFinished();
};

#endif // ROBLINEEDIT

