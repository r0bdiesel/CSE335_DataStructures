
#ifndef CDATABASE_H
#define CDATABASE_H
#include "Employee.h"
#include "Manager.h"
using namespace std;
#include <vector>
class Database{
protected:
    vector<Employee*> m_Employees;
public:
    Database(vector<Employee*> employees){
        m_Employees = employees;
    }
    Database(){
        vector<Employee*> employees;
        m_Employees = employees;
    }
    //Copy Constructor
    Database(const Database& Database){
        if(this != &Database){
           this->m_Employees = Database.getAllEmployees();
        }
    }
    // assignment operator 
    Database& operator=(const Database& Database){
        if(this != &Database){
            this->m_Employees = Database.getAllEmployees();
        }
        return *this;
    }
    Employee* getEmployee(int i) const{
        return m_Employees[i];
     }
    vector<Employee*> getAllEmployees() const{
       return m_Employees;
   }
   void setAllEmployees(const vector<Employee*> employees){
       m_Employees = employees;
   }
    void AddRecord(Employee* employee){
        m_Employees.push_back(employee);
    }
    void DisplayRecords()const{
    for(int i=0;i<m_Employees.size();i++){
        m_Employees[i]->DisplayEmployee();
    }
    }
};


#endif /* CDATABASE_H */

