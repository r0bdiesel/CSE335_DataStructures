
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include <string>
#include <iostream>


class Employee{
protected:
    string m_firstName;
    string m_LastName;
    string m_DepartmentName;
    unsigned short m_HiringYear;
public:
    Employee(string firstName,
            string lastName,
            string departmentName,
            unsigned short hiringYear){
    m_firstName = firstName;
    m_LastName = lastName;
    m_DepartmentName = departmentName;
    m_HiringYear = hiringYear;
    }
    Employee(){
        m_firstName = "";
    m_LastName = "";
    m_DepartmentName = "";
    m_HiringYear = 0;
    }
    string getFirstName() const{
        return m_firstName;
    }
    string getLastName() const{
        return m_LastName;
    }
    string getDepartmentName() const{
        return m_DepartmentName;
    }
    unsigned short getHiringYear() const{
        return m_HiringYear;
    }
    void setFirstName(const string firstName){
        m_firstName = firstName;
    }
    void setLastName(const string lastName){
        m_LastName = lastName;
    }
    void setdepartmentname(const string deptName){
        m_DepartmentName = deptName;
    }
    void setHiringDate(unsigned short hiringYear){
        m_HiringYear= hiringYear;
    }
    
    virtual void Print()const{
        cout<<m_firstName<<" "<<m_LastName<<";"<<m_DepartmentName<<":"<<m_HiringYear<<endl;
        
    }
    
};

#endif /* EMPLOYEE_H */

