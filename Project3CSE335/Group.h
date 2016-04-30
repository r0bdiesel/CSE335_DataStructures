#ifndef GROUP_H
#define GROUP_H


#include <vector>
#include "Entity.h"

class Group:public Entity{
protected:
    string m_groupname;
    vector<Employee*> m_Employees;
    
public:
    Group(string name){m_groupname = name;}
    Group(){
        m_groupname="";
        vector<Employee*> employees;
        m_Employees = employees;
    }
    //Copy Constructor
    Group(const Group& Group){
        if(this != &Group){
           this->m_Employees = Group.getAllEmployees();
           this->m_groupname =Group.m_groupname;
        }
    }
    // assignment operator 
    Group& operator=(const Group& Group){
        if(this != &Group){
            this->m_Employees = Group.getAllEmployees();
            this->m_groupname =Group.m_groupname;
        }
        return *this;
    }
    string getName()const{
        return m_groupname;
    }
    Employee* getEmployee(int i) const{
        return m_Employees[i];
     }
    vector<Employee*> getAllEmployees() const{
       return m_Employees;
    }
    void addGroupMember(Employee* employee){
        m_Employees.push_back(employee);
    }
    void setAllEmployees(const vector<Employee*> employees){
       m_Employees = employees;
    }
    virtual void print() const{
    for(int i=0;i<m_Employees.size();i++){
        m_Employees[i]->print();
    }
    }
    virtual void Accept(Visitor* v){v->VisitGroup(this);}  //visitor pattern
};


#endif /* GROUP_H */

