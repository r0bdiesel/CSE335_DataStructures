
#include <cstdlib>
#include <string>
#include "Employee.h"
#include "Manager.h"

int main(int argc, char** argv) {
    Employee JohnSmith1("John","Smith1","sales",2005);
    Employee JohnSmith2("John","Smith2","sales",2006);
    Employee JohnSmith3("John","Smith3","sales",2007);
    
    vector<Employee*> salesEmployees;
    salesEmployees.push_back(&JohnSmith1);
    salesEmployees.push_back(&JohnSmith2);
    salesEmployees.push_back(&JohnSmith3);
    
    
    
    Employee TomCruiseEmployee("Tom","cruise","sales",2000);
    Manager TomCruiseManager(TomCruiseEmployee,salesEmployees,2);
    
    Employee johnDoe1("john","Doe1","humanResources",2001);
    Employee johnDoe2("john","Doe2","humanResources",2004);
    Employee johnDoe3("john","Doe3","humanResources",2007);
    
    vector<Employee*> humanResourcesEmployees;
    humanResourcesEmployees.push_back(&johnDoe1);
    humanResourcesEmployees.push_back(&johnDoe2);
    humanResourcesEmployees.push_back(&johnDoe3);
    
    
    Employee billyEmployee("billy","bob","humanResources",2000);
    Manager billyManager(billyEmployee,humanResourcesEmployees,2);
    
    
    vector<Employee*> allEmployees;
    allEmployees.push_back(&johnDoe1);
    allEmployees.push_back(&johnDoe2);
    allEmployees.push_back(&johnDoe3);
    allEmployees.push_back(&JohnSmith1);
    allEmployees.push_back(&JohnSmith2);
    allEmployees.push_back(&JohnSmith3);
    
    vector<Manager*> allManager;
    allManager.push_back(&TomCruiseManager);
    allManager.push_back(&billyManager);
    
    for(int i=0;i<allEmployees.size();i++){
        allEmployees[i]->Print();
    }
    for(int i=0;i<allManager.size();i++){
        allManager[i]->Print();
}
    
    return 0;
}

