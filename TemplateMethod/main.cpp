
#include <cstdlib>
#include <iostream>
using namespace std;
#include "Student.h"
#include "StudentVectorSortByGPA.h"
#include "StudentVectorSortByFirstname.h"
#include "BubbleSortIncreasing.h"
#include "BubbleSortDecreasing.h"
#include "IntegerVector.h"
#include "StudentVector.h"
/*
 *
 */
int main(int argc, char** argv) {
 Student s1("Henry", "Smith", 1996, 150, 3.5);
 Student s2("John", "Anderson", 1995, 160, 4.0);
 Student s3("Tom", "Cooper", 1997, 120, 3.0);
 vector <Student*> sv;
 sv.push_back(&s1);
 sv.push_back(&s2);
 sv.push_back(&s3);
 
 StudentVector studentVector(sv);
 cout<<"***************** Before Sorting By GPA"<<endl;
 studentVector.print();
 BubbleSortIncreasing bsIncreasing;
 BubbleSortDecreasing bsDecreasing;
 
 cout<<"***************** After Sorting By GPA Decreasing"<<endl;
 StudentVectorSortByGPA svSortedByGPA(sv);
 bsIncreasing.sort(&svSortedByGPA);
 svSortedByGPA.print();
 cout<<"***************** After Sorting By FirstName Increasing"<<endl;
 StudentVectorSortByFirstname svSortedByFirstname(sv);
 bsIncreasing.sort(&svSortedByFirstname);
 svSortedByFirstname.print();
 vector <int> intVec;
 intVec.push_back(5);
 intVec.push_back(4);
 intVec.push_back(6);
 intVec.push_back(10);
 IntegerVector integerDatabase(intVec);
 cout<<"***************** Before Sorting Integers"<<endl;
 integerDatabase.print();
 cout<<"***************** After Sorting Integers Increasing"<<endl;
 bsIncreasing.sort(&integerDatabase);
 integerDatabase.print();
 cout<<"***************** After Sorting Integers Decreasing"<<endl;
 bsDecreasing.sort(&integerDatabase);
 integerDatabase.print();
 return 0;
}