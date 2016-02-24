
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
    CManager(string firstName,string LastName,int salary,tm hireYear,string DepartmentName,vector<CEmployee*> group):CEmployee(firstName,LastName,salary,hireYear){
        m_Group = group;
        m_DepartmentName = DepartmentName;
    }
   CManager(){
       tm year;
        //year.tm_year=0000;
        vector<CEmployee*> v;
       m_firstName = "";
       m_LastName = "";
       m_DepartmentName="";
       m_HiringYear = year;
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
   ~CManager(){
       for(int i=0;m_Group.size();i++){
           cout<<"manager deletion" <<endl;
            delete m_Group[i];
       }
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
       cout<<m_firstName<<" "<<m_LastName<<"   Salary:"<<m_salary<<"     HiringYear:"<<m_HiringYear.tm_year<<"     "<<m_DepartmentName<<"    Subordinates:"<<m_Group.size()<<endl; 
       if (m_Group.size() != 0){
           for(int i=0;i<m_Group.size();i++){
               cout<<"    ";
                m_Group[i]->DisplayEmployee();
            }
       }
    
   }
};



#endif /* MANAGER_H */

