
#include <cstdlib>
using namespace std;
#include <string>
#include <iostream>

#include "builder.h"
#include "CDatabase.h"
#include "Employee.h"
#include "csvbuilder.h"
#include "tabtxtbuilder.h"
#include "employeedatabaseparser.h"

int main(int argc, char** argv) {
    CDatabase test;
    for(int i=0;i<5;i++){
        Employee* record = new Employee("1","1",1,1);
        test.AddRecord(record);
    }
    
    Tabbuilder tabbuilder;
    CSVbuilder csvbuilder;
    EmployeeDatabaseParser tabparser;
    EmployeeDatabaseParser csvparser;
    
    tabparser.setBuilder(&tabbuilder);
    csvparser.setBuilder(&csvbuilder);
    
    tabparser.parse(test);
    csvparser.parse(test);
    tabbuilder.setFileName("Database");
    csvbuilder.setFileName("Database");
    tabbuilder.makeFile();
    csvbuilder.makeFile();
    string outputtab =tabbuilder.getExpression();
    string outputcsv =csvbuilder.getExpression();
    
    cout<<outputtab;
    cout<<outputcsv;
    return 0;
}
