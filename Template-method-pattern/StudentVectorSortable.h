
#ifndef STUDENTVECTORSORTABLE_H
#define STUDENTVECTORSORTABLE_H

#include "StudentVector.h"
#include "SortableVector.h"
class StudentVectorSortable: public StudentVector, public SortableVector{
public:
 StudentVectorSortable(vector <Student*>& studentVector): StudentVector(studentVector){}
 virtual unsigned int getSize() const {
 return m_StudentVector.size();
 }
 virtual void swap(int i, int j){
 Student* temp = m_StudentVector[i];
 m_StudentVector[i]=m_StudentVector[j];
 m_StudentVector[j]=temp;
 }
};

#endif /* STUDENTVECTORSORTABLE_H */

