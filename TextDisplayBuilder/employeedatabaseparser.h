#ifndef EMPLOYEEDATABASEPARSER
#define EMPLOYEEDATABASEPARSER

#include "CDatabase.h"
#include <string>
#include <iostream>
#include "builder.h"

class EmployeeDatabaseParser{
protected:
    Builder* m_dataBuilder;
public:
void setBuilder(CSVbuilder* builder){
     m_dataBuilder=builder;
}
void setBuilder(Tabbuilder* builder){
     m_dataBuilder=builder;
}
void parse(CDatabase database){
for(int i=0;i<database.getAllEmployees().size();i++){
          m_dataBuilder->addString(database.getEmployee(i)->getFirstName());
          m_dataBuilder->addSeparator();
          m_dataBuilder->addString(database.getEmployee(i)->getLastName());
          m_dataBuilder->addSeparator();
          m_dataBuilder->addInteger(database.getEmployee(i)->getSalary());
          m_dataBuilder->addSeparator();
          m_dataBuilder->addInteger(database.getEmployee(i)->getHiringYear());
          m_dataBuilder->addline();
       }

}


};

#endif // EMPLOYEEDATABASEPARSER

