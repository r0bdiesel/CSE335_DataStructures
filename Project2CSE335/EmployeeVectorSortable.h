
#ifndef EMPLOYEEVECTORSORTABLE_H
#define EMPLOYEEVECTORSORTABLE_H
#include "CDatabase.h"
#include "SortableVector.h"
class EmployeeVectorSortable: public CDatabase, public SortableVector{
 public:
EmployeeVectorSortable(vector <CEmployee*>& employees): CDatabase(employees){}
virtual unsigned int getSize() const{
    return m_Employees.size();
}
virtual void swap(int i, int j){
    CEmployee* temp = m_Employees[i];
    m_Employees[i]= m_Employees[j];
    m_Employees[j]=temp;
}
};


#endif /* EMPLOYEEVECTORSORTABLE_H */

