
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
};


#endif /* FILE_H */

