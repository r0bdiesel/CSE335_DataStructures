
#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H


#include "Visitor.h"
#include "Group.h"
#include "Department.h"
#include "Employee.h"
#include "Manager.h"



class PrintVisitor:public Visitor{
public:
    virtual void VisitGroup(Group* Group){
        cout <<Group->getName()<<endl;
        for(int i=0;i <Group->getAllEmployees().size();i++){
                Group->getEmployee(i)->Accept(this);
        }
    }
    virtual void VisitDepartment(Department* department){
        cout<<department->getName() <<endl;
        for(int i=0; i<department->getChildrenSize();i++){
            department->getChild(i)->Accept(this);
        }
    }
     virtual void VisitEmployee(Employee* Employee){
         cout<<"                  "<<Employee->getFirstName()<<" "<<Employee->getLastName()<<"; "<<Employee->getSalary()<<"; "<<Employee->getHiringYear()<<"; "<<Employee->getID()<<endl;
     }
    virtual void VisitManager(Manager* Manager){
         cout<<"        "<<Manager->getFirstName()<<" "<<Manager->getLastName()<<"; "<<Manager->getSalary()<<"; "<<Manager->getHiringYear()<<"; "<<Manager->getID()<<"; "<<Manager->getRank()<<endl;
    }
 
    };



#endif /* PRINTVISITOR_H */

