

#ifndef STUDENTVECTORSORTBYGPA_H
#define STUDENTVECTORSORTBYGPA_H

#include "StudentVectorSortable.h"
class StudentVectorSortByGPA: public StudentVectorSortable{
public:
 StudentVectorSortByGPA(vector <Student*> students): StudentVectorSortable(students){
 }
 virtual bool smaller(int i, int j) const {
 if(getStudent(i)->getGPA() < getStudent(j)->getGPA())
 return true;
 else
 return false;
 }
};


#endif /* STUDENTVECTORSORTBYGPA_H */

