
#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

#include "Visitor.h"


class PrintVisitor:public Visitor{
public:
    virtual void VisitFile(File* file){
        cout<<"(file name="<<file->getName()<<" , file size="<<file->getSize()<<");";
    }
    virtual void VisitDirectory(Directory* directory){
        cout<<"Directory "<<directory->getName()<<" contains: (";
        for(int i=0; i<directory->getChildrenSize();i++){
            directory->getChild(i)->Accept(this);
        }
        cout<<"); ";
    }
};


#endif /* PRINTVISITOR_H */

