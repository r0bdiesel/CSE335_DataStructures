
#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H

#include "BubbleSortTemplate.h"
class BubbleSortIncreasing: public BubbleSortTemplate{
    public:
        bool needSwap(SortableVector* sv,int i, int j){
            return !sv->smaller(i,j);
        }
};


#endif /* BUBBLESORTINCREASING_H */

