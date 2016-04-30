
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;
#include <string>
#include <iostream>
#include "Entity.h"

class Employee:public Entity{
protected:
    string m_firstName;
    string m_LastName;
    int m_salary;
    int m_HiringYear;
    int m_ID;
public:
    Employee(string firstName,string lastName,int salary,int hiringYear,int ID){
    m_firstName = firstName;
    m_LastName = lastName;
    m_salary = salary;
    m_HiringYear = hiringYear;
    m_ID = ID;
    }
    Employee(){
    m_firstName = "";
    m_LastName = "";
    m_salary = 0;
    m_HiringYear = 0;
    m_ID = 0;
    }
    //Copy Constructor
    Employee(const Employee& Employee){
        if(this != &Employee){
            this->m_LastName = Employee.m_LastName;
            this->m_firstName = Employee.m_firstName;
            this->m_salary = Employee.m_salary;
            this->m_HiringYear = Employee.m_HiringYear;
            this->m_ID =Employee.m_ID;
        }
    }
    // assignment operator 
    Employee& operator=(const Employee& Employee){
        if(this != &Employee){ 
            this->m_LastName = Employee.m_LastName;
            this->m_firstName = Employee.m_firstName;
            this->m_salary = Employee.m_salary;
            this->m_HiringYear = Employee.m_HiringYear;
            this->m_ID = Employee.m_ID;
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
    int getID() const{
        return m_ID;
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
        m_salary = salary;
    }
    void setID(const int ID){
        m_ID =ID;
    }
    virtual void print()const{
        cout<<m_firstName<<" "<<m_LastName<<"; "<<m_salary<<"; "<<m_HiringYear<<";"<<m_ID<<endl;
    }
    virtual void Accept(Visitor* v){v->VisitEmployee(this);}  //visitor pattern 
};



#endif /* EMPLOYEE_H */

