
#include "roblineedit.h"
void RobLineEdit::myEditingFinished(){
    emit iChanged(this);
}
