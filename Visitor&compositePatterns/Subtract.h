

#ifndef SUBTRACT_H
#define SUBTRACT_H

#include "BinaryExpr.h"
#include "ExprVisitor.h"
class Subtract:public BinaryExpr{
    public:
        Subtract(Expr* left,Expr* right):BinaryExpr(left,right){};
        virtual double compute(){
            return(getLeftOperand()->compute()-getRightOperand()->compute());};
        virtual void accept(ExprVisitor* v){v->visitSubtract(this);};
};

#endif /* SUBTRACT_H */

