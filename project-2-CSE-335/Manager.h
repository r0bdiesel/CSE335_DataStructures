
#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <vector>
using namespace std;

class CManager:public CEmployee{
protected:
        vector<CEmployee*> m_Group;
        string m_DepartmentName;
public:
    CManager(string firstName,string LastName,int salary,int hireYear,string DepartmentName,vector<CEmployee*> group):CEmployee(firstName,LastName,salary,hireYear){
        m_Group = group;
        m_DepartmentName = DepartmentName;
    }
   CManager(){
        vector<CEmployee*> v;
       m_firstName = "";
       m_LastName = "";
       m_DepartmentName="";
       m_HiringYear = 0;
       m_Group = v;
    }
   //Copy Constructor
    CManager(const CManager& CManager){
        if(this != &CManager){
            this->m_LastName = CManager.m_LastName;
            this->m_firstName = CManager.m_firstName;
            this->m_salary = CManager.m_salary;
            this->m_HiringYear = CManager.m_HiringYear;
            this->m_DepartmentName = CManager.m_DepartmentName;
            this->m_Group = CManager.m_Group;
            
        }
    }
    // assignment operator 
    CManager& operator=(const CManager& CManager){
        if(this != &CManager){
            this->m_LastName = CManager.m_LastName;
            this->m_firstName = CManager.m_firstName;
            this->m_salary = CManager.m_salary;
            this->m_HiringYear = CManager.m_HiringYear;
            this->m_DepartmentName = CManager.m_DepartmentName;
            this->m_Group = CManager.m_Group;
        }
        return *this;
    }
    
   vector<CEmployee*> getSuboordinates() const{
       return m_Group;
   }
   void setSuboordinates(const vector<CEmployee*> suboordinates){
       m_Group = suboordinates;
   }
   string getDepartmentName() const{
        return m_DepartmentName;
    }
   void setdepartmentname(const string deptName){
        m_DepartmentName = deptName;
    }
   virtual void DisplayEmployee() const{
       cout<<m_firstName<<" "<<m_LastName<<"; "<<m_salary<<"; "<<m_HiringYear<<"; "<<m_DepartmentName<<endl; 
    
   }
};



#endif /* MANAGER_H */

