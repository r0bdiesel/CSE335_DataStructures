
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include <string>
#include <iostream>

class Employee{
protected:
    string m_firstName;
    string m_LastName;
    int m_HiringYear;
    int m_salary;
public:
    Employee(string firstName,string lastName,int salary,int hiringYear){
    m_firstName = firstName;
    m_LastName = lastName;
    m_salary = salary;
    m_HiringYear = hiringYear;
    }
    Employee(){
    m_firstName = "";
    m_LastName = "";
    m_salary = 0;
    m_HiringYear = 0;
    }
    //Copy Constructor
    Employee(const Employee& Employee){
        if(this != &Employee){
            this->m_LastName = Employee.m_LastName;
            this->m_firstName = Employee.m_firstName;
            this->m_salary = Employee.m_salary;
            this->m_HiringYear = Employee.m_HiringYear;
        }
    }
    // assignment operator 
    Employee& operator=(const Employee& Employee){
        if(this != &Employee){
            this->m_LastName = Employee.m_LastName;
            this->m_firstName = Employee.m_firstName;
            this->m_salary =Employee.m_salary;
            this->m_HiringYear = Employee.m_HiringYear;
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

