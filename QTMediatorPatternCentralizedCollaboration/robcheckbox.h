#ifndef ROBCHECKBOX
#define ROBCHECKBOX

#include <QCheckBox>

class RobCheckBox:public QCheckBox{
    Q_OBJECT
public:
    RobCheckBox(QWidget* qw):QCheckBox(qw){};
    RobCheckBox(QString qs):QCheckBox(qs){};
signals:
    void iChanged(QObject*);
public slots:
    void myStateChanged(int);
};

#endif // ROBCHECKBOX

