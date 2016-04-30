
#ifndef EMPLOYEEVECTORSORTBYLASTNAME_H
#define EMPLOYEEVECTORSORTBYLASTNAME_H


#include "EmployeeVectorSortable.h"

class EmployeeVectorSortByLastName: public EmployeeVectorSortable{
public:
 EmployeeVectorSortByLastName(vector <Employee*> employees): EmployeeVectorSortable(employees){
 }
 virtual bool smaller(int i, int j) const {
 if(getEmployee(i)->getLastName() < getEmployee(j)->getLastName())
 return true;
 else
 return false;
 }
};

#endif /* EMPLOYEEVECTORSORTBYLASTNAME_H */

