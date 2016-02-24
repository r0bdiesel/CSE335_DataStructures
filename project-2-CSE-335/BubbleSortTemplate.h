
#ifndef BUBBLESORTTEMPLATE_H
#define BUBBLESORTTEMPLATE_H

#include "SortableVector.h"

class BubbleSortTemplate{
public:
 
 void sort(SortableVector* sortableVector){
    bool sorted = false;
    int n = sortableVector->getSize();
    while( !sorted ){
        sorted = true;
        for(int i=1;i<n;i++){
            if(needSwap(sortableVector,i-1,i)){
                sortableVector->swap(i-1,i);
                sorted = false;
            }
        }
        n--;
    }
 }
 
 virtual bool needSwap(SortableVector* sortableVector,int i,int j)=0;
 
 
};
#endif /* BUBBLESORTTEMPLATE_H */

