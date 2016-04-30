
#ifndef ADD_H
#define ADD_H

#include "BinaryExpr.h"
#include "ExprVisitor.h"
class Add:public BinaryExpr{
    public:
        Add(Expr* left,Expr* right):BinaryExpr(left,right){};
        virtual double compute(){
            return(getLeftOperand()->compute()+getRightOperand()->compute());
        };
        virtual void accept(ExprVisitor* v){v->visitAdd(this);};
};

#endif /* ADD_H */

