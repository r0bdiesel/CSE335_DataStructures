
#ifndef EVALUATIONVISITOR_H
#define EVALUATIONVISITOR_H
#include <stack>
#include "ExprVisitor.h"
#include "Literal.h"
#include "Negate.h"
#include "Add.h"
#include "Subtract.h"
#include "Multiply.h"
#include "Divide.h"

class EvaluationVisitor: public ExprVisitor{
private:
    stack<double> _myStack;
public:        
    double getValue(){double result = _myStack.top();_myStack.pop();return result;};
    
    virtual void visitLiteral(Literal* lit){_myStack.push(lit->getValue());};
    
    virtual void visitNegate(Negate* neg){
        neg->getOperand()->accept(this);
        double val = _myStack.top(); _myStack.pop();
        _myStack.push(-val);
    };
    virtual void visitAdd(Add* a){
        a->getLeftOperand()->accept(this);
        a->getRightOperand()->accept(this);
        
        double rval=_myStack.top();_myStack.pop();
        double lval = _myStack.top();_myStack.pop();
        _myStack.push(lval+rval);
    };
    virtual void visitSubtract(Subtract* sub){
        sub->getLeftOperand()->accept(this);
        sub->getRightOperand()->accept(this);
        
        double rval=_myStack.top();_myStack.pop();
        double lval = _myStack.top();_myStack.pop();
        _myStack.push(lval-rval);
    };
    
    virtual void visitMultiply(Multiply* mul){
        mul->getLeftOperand()->accept(this);
        mul->getRightOperand()->accept(this);
        
        double rval=_myStack.top();_myStack.pop();
        double lval = _myStack.top();_myStack.pop();
        _myStack.push(lval*rval);
    };
    
     virtual void visitDivide(Divide* div){
        div->getLeftOperand()->accept(this);
        div->getRightOperand()->accept(this);
        
        double rval=_myStack.top();_myStack.pop();
        double lval = _myStack.top();_myStack.pop();
        _myStack.push(lval / rval);
    };
};


#endif /* EVALUATIONVISITOR_H */

