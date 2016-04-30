
#ifndef NEWFILE1_H
#define NEWFILE1_H

#include "Employee.h"
#include <vector>

class Manager:public Employee{
protected:
    Employee m_Employee;
    vector <Employee*> m_Group;
    unsigned short m_level;
public:
    Manager(const Employee& employee,
            const vector<Employee*> group,
            const unsigned short level ){
        m_Employee = employee;
        m_Group=group;
        m_level=level;
    }
   void Print() const{
        cout<<m_Employee.getFirstName()<<" "<<
                m_Employee.getLastName()<<";"<<
                m_Employee.getDepartmentName()<<";"<<
                m_Employee.getHiringYear()<<";"<<
                m_level<<endl;
        for(int i=0; i<m_Group.size();i++){
            cout<<m_Group[i]->getFirstName()<<" "
                    <<m_Group[i]->getLastName()<<";";
            cout<<endl;
        }
    }
};


#endif /* NEWFILE1_H */

