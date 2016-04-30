
#include "robfontcombobox.h"

void RobFontComboBox::myCurrentFontChanged(const QFont &){
    emit iChanged(this);
}
