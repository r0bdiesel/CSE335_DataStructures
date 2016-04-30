#include <cstdlib>
#include <iostream>
#include <vector>

#include "BubbleSortIncreasing.h"
#include "BubbleSortDecreasing.h"
#include "Employee.h"
#include "Manager.h"
#include "CDatabase.h"
#include "EmployeeVectorSortByFirstName.h"
#include "EmployeeVectorSortByHiringYear.h"
#include "EmployeeVectorSortByLastName.h"
#include "EmployeeVectorSortBySalary.h"
#include "EmployeeVectorSortable.h"




using namespace std;

int main(int argc, char** argv) {
    tm HiringYear; 
    CEmployee JohnSmith1("John","Smith1",10000,2011);
    CEmployee JohnSmith2("John","Smith2",20000,2012);
    CEmployee JohnSmith3("John","Smith3",30000,2013);
    
    vector<CEmployee*> Employees;
    Employees.push_back(&JohnSmith1);
    Employees.push_back(&JohnSmith2);
    Employees.push_back(&JohnSmith3);
    
    CManager TomCruiseManager("Tom","Cruise",40000,2000,"Sales",Employees);
    Employees.push_back(&TomCruiseManager);
    
   
    CEmployee JohnDoe1("John","Doe1",15000,2010);
    CEmployee JohnDoe2("John","Doe2",25000,2011);
    CEmployee JohnDoe3("John","Doe3",35000,2012);
    
    Employees.push_back(&JohnDoe1);
    Employees.push_back(&JohnDoe2);
    Employees.push_back(&JohnDoe3);
    
    vector<CEmployee*> HREmployees;
    HREmployees.push_back(&JohnDoe1);
    HREmployees.push_back(&JohnDoe2);
    HREmployees.push_back(&JohnDoe3);
    
    CManager AliceCooperManager("Alice","Cooper",45000,2000,"Human Resources",HREmployees);
    Employees.push_back(&AliceCooperManager);
    
    CDatabase database(Employees);
 cout<<"***************** Before Sorting"<<endl;
 database.DisplayRecords();
 BubbleSortIncreasing bsIncreasing;
 BubbleSortDecreasing bsDecreasing;
 
 cout<<"***************** After Sorting By FirstName Alphabetical"<<endl;
 EmployeeVectorSortByFirstName evSortedByFirstName(Employees);
 bsIncreasing.sort(&evSortedByFirstName);
 evSortedByFirstName.DisplayRecords();
 
 cout<<"***************** After Sorting By FirstName Reverse Alphabetical"<<endl;
 bsDecreasing.sort(&evSortedByFirstName);
 evSortedByFirstName.DisplayRecords();
 
 cout<<"***************** After Sorting By LastName Alphabetical"<<endl;
 EmployeeVectorSortByLastName evSortedByLastName(Employees);
 bsIncreasing.sort(&evSortedByLastName);
 evSortedByLastName.DisplayRecords();
 
 cout<<"***************** After Sorting By LastName Reverse Alphabetical"<<endl;
 bsDecreasing.sort(&evSortedByLastName);
 evSortedByLastName.DisplayRecords();
 
 cout<<"***************** After Sorting By Salary Increasing"<<endl;
 EmployeeVectorSortBySalary evsortedbysalary(Employees);
 bsIncreasing.sort(&evsortedbysalary);
 evsortedbysalary.DisplayRecords();
 
 cout<<"***************** After Sorting By Salary Decreasing"<<endl;
 bsDecreasing.sort(&evsortedbysalary);
 evsortedbysalary.DisplayRecords();
 
 
 cout<<"***************** After Sorting By Hire year Increasing"<<endl;
 EmployeeVectorSortByHiringYear evsortedbyhireyear(Employees);
 bsIncreasing.sort(&evsortedbyhireyear);
 evsortedbyhireyear.DisplayRecords();
 
 cout<<"***************** After Sorting By Hire year Decreasing"<<endl;
 bsDecreasing.sort(&evsortedbyhireyear);
 evsortedbyhireyear.DisplayRecords();
 
 
    return 0;
}

