
#ifndef MULTIPLY_H
#define MULTIPLY_H

#include "BinaryExpr.h"
#include "ExprVisitor.h"
class Multiply:public BinaryExpr{
    public:
        Multiply(Expr* left,Expr* right):BinaryExpr(left,right){};
        virtual double compute(){
            return(getLeftOperand()->compute()*getRightOperand()->compute());};
        virtual void accept(ExprVisitor* v){v->visitMultiply(this);};
};



#endif /* MULTIPLY_H */

