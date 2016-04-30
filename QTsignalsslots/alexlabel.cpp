
#include "alexlabel.h"
#include <QFont>
void Alexlabel::setFont(QFont qf){
    QLabel::setFont(qf);
}
void Alexlabel::setFontByText(QString qs){
    this->setFont(QFont(qs));
}
void Alexlabel::modifyFontByCheckboxBold(bool b){
    QFont font = this->font();
    font.setWeight(0);
    font.setBold(b);
    this->setFont(font);
}
void Alexlabel::modifyFontByCheckboxItalic(bool b){
    QFont font = this->font();
    font.setWeight(3);
    font.setItalic(b);
    this->setFont(font);
}
void Alexlabel::modifyFontByCheckboxUnderline(bool b){
    QFont font = this->font();
    font.setUnderline(b);
    this->setFont(font);
}

void Alexlabel::modifyFontByCheckboxSize(QString sizeString){
    QFont font=this->font();
    int size=sizeString.toInt();
    if(size==0)
        font.setPointSize(12);
    else
        font.setPixelSize(size);
    this->setFont(font);
}




