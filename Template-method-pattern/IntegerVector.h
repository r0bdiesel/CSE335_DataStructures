#ifndef INTEGERVECTOR_H
#define INTEGERVECTOR_H


#include <vector>
#include <iostream>
#include "SortableVector.h"

class IntegerVector : public SortableVector {
protected:
 vector <int> m_IntegerVector;
public:
 IntegerVector(vector <int>& integerVector){
    m_IntegerVector=integerVector;
 }
 virtual unsigned int getSize() const {
    return m_IntegerVector.size();
 }
 virtual void swap(int i, int j){
    int temp = m_IntegerVector[i];
    m_IntegerVector[i]=m_IntegerVector[j];
    m_IntegerVector[j]=temp;
 }
 virtual void print() const {
    for(int i=0; i<getSize(); i++)
    cout<<m_IntegerVector[i]<<"; "<<endl;
 }
 int getInteger(int i) const{
    return m_IntegerVector[i];
 }
 virtual bool smaller(int i, int j) const {
    if(getInteger(i) < getInteger(j))
    return true;
    else
    return false;
 }
};


#endif /* INTEGERVECTOR_H */

