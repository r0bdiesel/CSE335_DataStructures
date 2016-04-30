

#ifndef EMPLOYEEVECTORSORTBYHIRINGYEAR_H
#define EMPLOYEEVECTORSORTBYHIRINGYEAR_H

#include "EmployeeVectorSortable.h"
class EmployeeVectorSortByHiringYear: public EmployeeVectorSortable{
public:
    EmployeeVectorSortByHiringYear(vector <Employee*> employees): EmployeeVectorSortable(employees){}
    virtual bool smaller(int i, int j) const{
        if((getEmployee(i)->getHiringYear()) < (getEmployee(j)->getHiringYear())){
            return true;
        }
    
        else{
            return false;
        }
    }
};



#endif /* EMPLOYEEVECTORSORTBYHIRINGYEAR_H */

