
#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include "Entity.h"

using namespace std;

class Manager:public Employee{
protected:
    int m_rank;
public:
    Manager(string firstName,string LastName,int salary,int hireYear,int ID,int rank):Employee(firstName,LastName,salary,hireYear,ID){
        m_rank = rank;
    }
   Manager(){
       m_firstName = "";
       m_LastName = "";
       m_salary = 0;
       m_HiringYear = 0;
       m_ID = 0;
       m_rank=0;
    }
   //Copy Constructor
    Manager(const Manager& Manager){
        if(this != &Manager){
            this->m_LastName = Manager.m_LastName;
            this->m_firstName = Manager.m_firstName;
            this->m_salary = Manager.m_salary;
            this->m_HiringYear = Manager.m_HiringYear;
            this->m_ID =Manager.m_ID;
            this->m_rank = Manager.m_rank;
        }
    }
    // assignment operator 
    Manager& operator=(const Manager& Manager){
        if(this != &Manager){
            this->m_LastName = Manager.m_LastName;
            this->m_firstName = Manager.m_firstName;
            this->m_salary = Manager.m_salary;
            this->m_HiringYear = Manager.m_HiringYear;
            this->m_ID = Manager.m_ID;
            this->m_rank = Manager.m_rank;
        }
        return *this;
    }
    
   int getRank() const{
        return m_rank;
    }
   void setRank(const int rank){
        m_rank = rank;
    }
   virtual void print() const{
       cout<<m_firstName<<" "<<m_LastName<<"; "<<m_salary<<"; "<<m_HiringYear<<"; "<<m_ID<<";"<<m_rank<<endl; 
   }
    virtual void Accept(Visitor* v){v->VisitManager(this);}  //visitor pattern 
};



#endif /* MANAGER_H */

