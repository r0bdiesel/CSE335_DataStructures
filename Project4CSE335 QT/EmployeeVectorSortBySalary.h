
#ifndef EMPLOYEEVECTORSORTBYSALARY_H
#define EMPLOYEEVECTORSORTBYSALARY_H

#include "EmployeeVectorSortable.h"
class EmployeeVectorSortBySalary: public EmployeeVectorSortable{
public:
    EmployeeVectorSortBySalary(vector <Employee*> employees): EmployeeVectorSortable(employees){}
    virtual bool smaller(int i, int j) const{
        if(getEmployee(i)->getSalary() < getEmployee(j)->getSalary()){
            return true;
        }
        else{
            return false;
        }
    }
};


#endif /* EMPLOYEEVECTORSORTBYSALARY_H */

