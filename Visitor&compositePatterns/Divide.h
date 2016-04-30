
#ifndef DIVIDE_H
#define DIVIDE_H

#include "BinaryExpr.h"
#include "ExprVisitor.h"
class Divide:public BinaryExpr{
    public:
        Divide(Expr* left,Expr* right):BinaryExpr(left,right){};
        virtual double compute(){
            return(getLeftOperand()->compute() / getRightOperand()->compute());};
        virtual void accept(ExprVisitor* v){v->visitDivide(this);};
};



#endif /* DIVIDE_H */

