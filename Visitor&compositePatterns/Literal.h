

#ifndef LITERAL_H
#define LITERAL_H

#include "Expr.h"
#include "ExprVisitor.h"

class Literal:public Expr{
private:
    double _value;
public:
       Literal(double val):_value(val){};
       double getValue(){return _value;};
       virtual double compute(){return _value;};
       virtual void accept( ExprVisitor* v){v->visitLiteral(this);};
};


#endif /* LITERAL_H */

