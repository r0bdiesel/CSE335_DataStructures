
#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include "Visitor.h"

class Entity{
public:
    virtual void Accept(Visitor*)=0;//visitor pattern
};




#endif /* ENTITY_H */

