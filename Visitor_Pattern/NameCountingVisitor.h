
#ifndef NAMECOUNTINGVISITOR_H
#define NAMECOUNTINGVISITOR_H

#include "Visitor.h"
#include <stack>

class NameCountingVisitor:public Visitor{
public:
        stack <unsigned int> m_stack;
public:
    virtual void VisitFile(File* file){
        m_stack.push(file->getName().size());
    }
    virtual void VisitDirectory(Directory* dir){
        unsigned int sum = dir->getName().size();
        //Visit every child, store state information in m_stack
        for(int i=0;i<dir->getChildrenSize();i++){
            dir->getChild(i)->Accept(this);
        }
        //get state information from m_stack, do calculation.
        for(int i=0;i<dir->getChildrenSize();i++){
            sum +=m_stack.top();
            m_stack.pop();
        }
        //store state information in m_stack
        m_stack.push(sum);
    }
    double getValue(){
        unsigned int result =m_stack.top();
        m_stack.pop();
        return result;
    }
};

#endif /* NAMECOUNTINGVISITOR_H */

