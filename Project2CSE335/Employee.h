
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include <string>
#include <iostream>

class CEmployee{
protected:
    string m_firstName;
    string m_LastName;
    int m_HiringYear;
    int m_salary;
public:
    CEmployee(string firstName,string lastName,int salary,int hiringYear){
    m_firstName = firstName;
    m_LastName = lastName;
    m_salary = salary;
    m_HiringYear = hiringYear;
    }
    CEmployee(){
    m_firstName = "";
    m_LastName = "";
    m_salary = 0;
    m_HiringYear = 0;
    }
    //Copy Constructor
    CEmployee(const CEmployee& CEmployee){
        if(this != &CEmployee){
            this->m_LastName = CEmployee.m_LastName;
            this->m_firstName = CEmployee.m_firstName;
            this->m_salary = CEmployee.m_salary;
            this->m_HiringYear = CEmployee.m_HiringYear;
        }
    }
    // assignment operator 
    CEmployee& operator=(const CEmployee& CEmployee){
        if(this != &CEmployee){ 
            this->m_LastName = CEmployee.m_LastName;
            this->m_firstName = CEmployee.m_firstName;
            this->m_salary =CEmployee.m_salary;
            this->m_HiringYear = CEmployee.m_HiringYear;
        }
        return *this;
    }
    string getFirstName() const{
        return m_firstName;
    }
    string getLastName() const{
        return m_LastName;
    }
    int getSalary() const{
        return m_salary;
    }
    int getHiringYear() const{
        return m_HiringYear;
    }
    void setFirstName(const string firstName){
        m_firstName = firstName;
    }
    void setLastName(const string lastName){
        m_LastName = lastName;
    }
    void setHiringDate(const int hiringYear){
        m_HiringYear = hiringYear;
    }
    void setSalary(const int salary){
        m_salary= salary;
    }
    virtual void DisplayEmployee()const{
        cout<<m_firstName<<" "<<m_LastName<<"; "<<m_salary<<"; "<<m_HiringYear<<endl;
    }
    
};



#endif /* EMPLOYEE_H */

