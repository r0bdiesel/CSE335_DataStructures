
#include "robcheckbox.h"

void RobCheckBox::myStateChanged(int){
    emit iChanged(this);
}
