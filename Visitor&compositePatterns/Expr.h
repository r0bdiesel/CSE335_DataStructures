
#ifndef EXPR_H
#define EXPR_H

#include "ExprVisitor.h"

class Expr{
public:
    virtual double compute()=0;
    virtual void accept( ExprVisitor* )=0;
    
};

#endif /* EXPR_H */

