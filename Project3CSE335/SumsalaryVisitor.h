
#ifndef SUMSALARYVISITOR_H
#define SUMSALARYVISITOR_H

#include "Visitor.h"
#include "Group.h"
#include "Employee.h"

#include <vector>

class SumsalaryVisitor:public Visitor{
public:
        vector <int> m_saleries;
public:
    virtual void VisitGroup(Group* Group){
        for(int i=0; i<Group->getAllEmployees().size() ;i++){
             m_saleries.push_back(Group->getEmployee(i)->getSalary());
        }
    }
    virtual void VisitDepartment(Department* dep){
        //Visit every child, store state information in m_stack
        for(int i=0;i<dep->getChildrenSize();i++){
            dep->getChild(i)->Accept(this);
        }
    }
    virtual void VisitEmployee(Employee* Employee){
         m_saleries.push_back(Employee->getSalary());
    }
    virtual void VisitManager(Manager* Manager){
         m_saleries.push_back(Manager->getSalary());
    }
    void restTotalSalary(){
        for(int i=0;i< m_saleries.size();i++){
             m_saleries.pop_back();
        }
    }
    double getTotalSalary(){
        unsigned int sum=0;
        for(int i=0; i< m_saleries.size();i++){
            sum = sum +  m_saleries[i];
        }
        return sum;
    }
};



#endif /* SUMSALARYVISITOR_H */

