
#ifndef FILE_H
#define FILE_H

#include <iostream>
#include "Entity.h"

class File: public Entity{
    public:
        File(string name, unsigned int size):Entity(name,size){}
        virtual void print() const{
            cout<<"(file name="<<m_name<<" , file size="<<m_size<<");";
        }
        
       virtual void Accept(Visitor* v){v->VisitFile(this);}  //visitor pattern
};


#endif /* FILE_H */

