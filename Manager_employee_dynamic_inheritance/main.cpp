#include <cstdlib>
#include <string>
#include "Employee.h"
#include "Manager.h"

using namespace std;


int main(int argc, char** argv) {
    Employee JohnSmith1("John","Smith1","sales",2005);
    Employee JohnSmith2("John","Smith2","sales",2006);
    Employee JohnSmith3("John","Smith3","sales",2007);
    
    vector<Employee*> salesEmployees;
    salesEmployees.push_back(&JohnSmith1);
    salesEmployees.push_back(&JohnSmith2);
    salesEmployees.push_back(&JohnSmith3);
    
    
    
    Manager TomCruiseManager("Tom","Cruise","Sales",2000,salesEmployees,2);
    
    Employee JohnDoe1("john","Doe1","humanResources",2001);
    Employee JohnDoe2("john","Doe2","humanResources",2004);
    Employee JohnDoe3("john","Doe3","humanResources",2007);
    
    vector<Employee*> humanResourcesEmployees;
    humanResourcesEmployees.push_back(&JohnDoe1);
    humanResourcesEmployees.push_back(&JohnDoe2);
    humanResourcesEmployees.push_back(&JohnDoe3);
    
    Manager billyManager("billy","bob","humanResources",2000,humanResourcesEmployees,3);
    
    
    vector<Employee*> allEmployees;
    allEmployees.push_back(&JohnDoe1);
    allEmployees.push_back(&JohnDoe2);
    allEmployees.push_back(&JohnDoe3);
    allEmployees.push_back(&TomCruiseManager);
    allEmployees.push_back(&JohnSmith1);
    allEmployees.push_back(&JohnSmith2);
    allEmployees.push_back(&JohnSmith3);
    allEmployees.push_back(&billyManager);
    
    cout<<"allemployees: "<<endl;
    for(int i=0;i<allEmployees.size();i++){
        allEmployees[i]->Print();
    }
    billyManager.Print();
  
    return 0;
}

