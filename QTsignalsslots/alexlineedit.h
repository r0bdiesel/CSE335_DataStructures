#ifndef ALEXLINEEDIT
#define ALEXLINEEDIT

#include <QLineEdit>
class AlexLineEdit:public QLineEdit{
    Q_OBJECT
public:
    AlexLineEdit(const QString& qstring):QLineEdit(qstring){};
    AlexLineEdit(QWidget* qw):QLineEdit(qw){};
public slots:
    void showFont(QFont);
};

#endif // ALEXLINEEDIT

