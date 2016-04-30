
#ifndef BUBBLESORTDECREASING_H
#define BUBBLESORTDECREASING_H
#include "BubbleSortTemplate.h"
#include "SortableVector.h"

class BubbleSortDecreasing:public BubbleSortTemplate{
public:
        bool needSwap(SortableVector* sv,int i,int j){
        return sv->smaller(i,j);
        }

};


#endif /* BUBBLESORTDECREASING_H */

