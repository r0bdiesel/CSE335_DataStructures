

#ifndef EXPRVISITOR_H
#define EXPRVISITOR_H

//forward clas declarations
class Literal;//cannot have #include "Literal.h" because it will create  circular references
class Negate;
class Add;
class Subtract;
class Multiply;
class Divide;

class ExprVisitor{
public:
    virtual void visitLiteral(Literal*)=0;
    virtual void visitNegate(Negate*)=0;
    virtual void visitAdd(Add*)=0;
    virtual void visitSubtract(Subtract*)=0;
    virtual void visitMultiply(Multiply*)=0;
    virtual void visitDivide(Divide*)=0;
};

#endif /* EXPRVISITOR_H */

