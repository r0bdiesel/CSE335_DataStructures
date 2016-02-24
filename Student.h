
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

class Student{
protected:
 string m_FirstName;
 string m_LastName;
 unsigned short m_BirthYear;
 float m_Weight;
 float m_GPA;
public:
 Student (const string& firstName, const string& lastName, unsigned short birthYear, float weight, float gpa){
    m_FirstName=firstName;
    m_LastName=lastName;
    m_BirthYear=birthYear;
    m_Weight=weight;
    m_GPA=gpa;
 }
 string getFirstName() const{
     return m_FirstName;
 }
 string getLastName() const{
    return m_LastName;
 }
 unsigned short getBirthYear() const{
    return m_BirthYear;
 }
 float getWeight() const{
    return m_Weight;
 }
 float getGPA() const{
    return m_GPA;
 }
 void print(){
    cout<<m_FirstName<<" "
    <<m_LastName<<"; "
    <<m_BirthYear<<"; "
    <<m_Weight<<": "
    <<m_GPA<<endl;
 }
};


#endif /* STUDENT_H */

