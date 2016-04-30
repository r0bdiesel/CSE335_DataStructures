#ifndef ROBFONTCOMBOBOX
#define ROBFONTCOMBOBOX

#include <QFontComboBox>
class RobFontComboBox:public QFontComboBox{
    Q_OBJECT;
public:
    RobFontComboBox(QWidget* qw):QFontComboBox(qw){};
signals:
    void iChanged(QObject*);
public slots:
    void myCurrentFontChanged(const QFont&);
};

#endif // ROBFONTCOMBOBOX

