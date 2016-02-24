
#ifndef EMPLOYEEVECTORSORTBYFIRSTNAME_H
#define EMPLOYEEVECTORSORTBYFIRSTNAME_H

#include "EmployeeVectorSortable.h"

class EmployeeVectorSortByFirstName: public EmployeeVectorSortable{
public:
 EmployeeVectorSortByFirstName(vector <CEmployee*> employees): EmployeeVectorSortable(employees){
 }
 virtual bool smaller(int i, int j) const {
 if(getEmployee(i)->getFirstName() < getEmployee(j)->getFirstName())
 return true;
 else
 return false;
 }
};


#endif /* EMPLOYEEVECTORSORTBYFIRSTNAME_H */

