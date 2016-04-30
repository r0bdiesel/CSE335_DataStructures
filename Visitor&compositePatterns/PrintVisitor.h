

#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H
#include <stack>
#include "ExprVisitor.h"
#include "Literal.h"
#include "Negate.h"
#include "Add.h"
#include "Subtract.h"
#include "Multiply.h"
#include "Divide.h"


class PrintVisitor:public ExprVisitor{
public:
    virtual void visitLiteral(Literal* lit){
        if (lit->getValue() >=0) cout<<" "<<lit->getValue()<<"";
        else{
            cout<<"("<<lit->getValue()<<")";
        }
    };
    virtual void visitNegate(Negate* neg){
        cout<<"(-";
        neg->getOperand()->accept(this);
        cout<<")";
    };
    virtual void visitAdd(Add* a){
        cout<<"(";
        a->getLeftOperand()->accept(this);
        cout<<"+";
        a->getRightOperand()->accept(this);
        cout<<")";
    };
    virtual void visitSubtract(Subtract* sub){
      cout<<"(";
      sub->getLeftOperand()->accept(this);
      cout<<"-";
      sub->getRightOperand()->accept(this);
      cout<<")";
    };
    virtual void visitMultiply(Multiply* mul){
      cout<<"(";
      mul->getLeftOperand()->accept(this);
      cout<<"*";
      mul->getRightOperand()->accept(this);
      cout<<")"; 
    };
    virtual void visitDivide(Divide* div){
      cout<<"(";
      div->getLeftOperand()->accept(this);
      cout<<"/";
      div->getRightOperand()->accept(this);
      cout<<")"; 
    };
};


#endif /* PRINTVISITOR_H */

