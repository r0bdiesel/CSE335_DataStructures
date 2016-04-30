#ifndef ALEXLABEL
#define ALEXLABEL

#include <QObject>
#include <QLabel>
#include <QFont>
#include <QMessageBox>

class Alexlabel:public QLabel{
    Q_OBJECT
public:
    Alexlabel(QWidget* qw):QLabel(qw){};
public slots:
    void setFont(QFont);
    void setFontByText(QString);
    void modifyFontByCheckboxBold(bool);
    void modifyFontByCheckboxItalic(bool);
    void modifyFontByCheckboxUnderline(bool);
    void modifyFontByCheckboxSize(QString);
};








#endif // ALEXLABEL

