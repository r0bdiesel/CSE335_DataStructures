
#ifndef NEGATE_H
#define NEGATE_H

#include "Expr.h"
#include "ExprVisitor.h"

class Negate:public Expr{
private:
    Expr* _opPtr;
public:
    Negate(Expr* opr):_opPtr(opr){};
    virtual ~Negate(){delete _opPtr;};
    Expr* getOperand(){return _opPtr;};
    
    virtual double compute(){return -(_opPtr->compute());};
    virtual void accept(ExprVisitor* v){v->visitNegate(this);};
};


#endif /* NEGATE_H */

