
#ifndef STUDENTVECTORSORTBYFIRSTNAME_H
#define STUDENTVECTORSORTBYFIRSTNAME_H

#include "StudentVectorSortable.h"

class StudentVectorSortByFirstname: public StudentVectorSortable{
public:
 StudentVectorSortByFirstname(vector <Student*> students):
StudentVectorSortable(students){
 }
 virtual bool smaller(int i, int j) const {
 if(getStudent(i)->getFirstName() < getStudent(j)->getFirstName())
 return true;
 else
 return false;
 }
};

#endif /* STUDENTVECTORSORTBYFIRSTNAME_H */

