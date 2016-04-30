
#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
#include <vector>

class Manager:public Employee{
protected:
        vector<Employee*> m_Group;
        unsigned short m_level;
public:
    Manager(string firstName,string LastName,string DepartmentName,unsigned short hireYear,vector<Employee*> group,unsigned short level ):Employee(firstName,LastName,DepartmentName,hireYear){
        m_Group=group;
        m_level=level;
    }
   virtual void Print() const{
    cout<<m_firstName<<" "<<m_LastName<<";"<<m_DepartmentName<<";"<<m_HiringYear<<"; Level:"<<m_level<<endl;
    }
};

#endif /* MANAGER_H */

