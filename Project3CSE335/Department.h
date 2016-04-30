#ifndef DEPARTMENT_H
#define DEPARTMENT_H


#include "Entity.h"
#include <vector>
#include <iostream>
#include <algorithm>

class Department:public Entity{
protected:
    string m_depname;
    vector<Entity*> entries;
public:
    Department(string name){m_depname = name;}
    Department(){
        m_depname ="";
        vector<Entity*> vec;
        entries = vec;
    }
     //Copy Constructor
    Department(const Department& Department){
        if(this != &Department){
           this->entries = Department.entries;
           this->m_depname =Department.m_depname;
        }
    }
    // assignment operator 
    Department& operator=(const Department& Department){
        if(this != &Department){
            this->entries = Department.entries;
            this->m_depname =Department.m_depname;
        }
        return *this;
    }
    virtual void setName(const string name){
        m_depname = name;
    }
    virtual string getName()const{
        return m_depname;
    }
    virtual void addDepartmentMember(Entity* entry){
        entries.push_back(entry);
    }
    virtual void removeEntity(Entity* entry){
        remove(entries.begin(),entries.end(), entry);
    }
    virtual Entity* getChild(int i) const {
        return entries[i];
    }
    virtual int getChildrenSize() const{
        return entries.size();
    }
    
    virtual void Accept(Visitor* v){v->VisitDepartment(this);}  //visitor pattern      
};

#endif /* DEPARTMENT_H */

