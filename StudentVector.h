
#ifndef STUDENTVECTOR_H
#define STUDENTVECTOR_H



#include <vector>

class StudentVector{
protected:
 vector <Student*> m_StudentVector;
public:
 StudentVector(vector <Student*>& studentVector){
 m_StudentVector=studentVector;
 }
 virtual void print() const {
 for(int i=0; i<m_StudentVector.size(); i++)
 m_StudentVector[i]->print();
 }
 Student* getStudent(int i) const{
 return m_StudentVector[i];
 }
};

#endif /* STUDENTVECTOR_H */

