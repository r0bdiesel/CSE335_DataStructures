
#ifndef BASE_H
#define BASE_H
#include "Employee.h"
using namespace std;
class Base{
protected:
    int m_Num;
    Employee* m_EmployeePtr;
private:
    Base(){}
public:
    Base(const int num,const string& firstName,const string& lastName,const string& departmentName,const unsigned short hireYear){
    m_Num =num;
m_EmployeePtr=new Employee(firstName,lastName,departmentName,hireYear);
cout<<"in base constructor"<<firstName<<endl;
    }
  virtual ~Base(){
      cout<<"In Base Destructor:"<<m_EmployeePtr->getFirstName()<<endl;
      delete m_EmployeePtr;
  }
  int getNum() const{
      return m_Num;
  }
  Employee* getEmployeePtr() const{
      return m_EmployeePtr;
  }
  //Copy constructor
 Base(const Base& base){
 if(this != &base){
 delete m_EmployeePtr;
 m_Num=base.getNum();//This will not compile if getNum() is not a constant.
  m_EmployeePtr = new Employee(
 base.getEmployeePtr()->getFirstName(),
 base.getEmployeePtr()->getLastName(),
 base.getEmployeePtr()->getDepartmentName(),
 base.getEmployeePtr()->getHiringYear());
 }
 }
 //Assignment operator
 Base& operator=(const Base& base){
 if(this != &base){
 delete m_EmployeePtr;
 m_Num=base.getNum();//This will not compile if getNum() is not a constant.
 m_EmployeePtr = new Employee(
 base.getEmployeePtr()->getFirstName(),
 base.getEmployeePtr()->getLastName(),
 base.getEmployeePtr()->getDepartmentName(),
 base.getEmployeePtr()->getHiringYear());
 }
 }
 
 
 
};


#endif /* BASE_H */

