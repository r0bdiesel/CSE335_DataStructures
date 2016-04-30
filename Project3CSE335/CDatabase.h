
#ifndef CDATABASE_H
#define CDATABASE_H
#include "Employee.h"
#include "Manager.h"
using namespace std;
#include <vector>
class CDatabase{
protected:
    vector<Employee*> m_Employees;
public:
    CDatabase(vector<Employee*> employees){
        m_Employees = employees;
    }
    CDatabase(){
        vector<Employee*> employees;
        m_Employees = employees;
    }
    //Copy Constructor
    CDatabase(const CDatabase& CDatabase){
        if(this != &CDatabase){
           this->m_Employees = CDatabase.getAllEmployees();
        }
    }
    // assignment operator 
    CDatabase& operator=(const CDatabase& CDatabase){
        if(this != &CDatabase){
            this->m_Employees = CDatabase.getAllEmployees();
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

