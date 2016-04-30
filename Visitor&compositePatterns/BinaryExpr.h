
#ifndef BINARYEXPR_H
#define BINARYEXPR_H
#include "Expr.h"
class BinaryExpr:public Expr{
private:
    Expr* _leftPtr;
    Expr* _rightPtr;
protected:
    BinaryExpr(Expr* left,Expr* right):_leftPtr(left),_rightPtr(right){};
    virtual ~BinaryExpr(){delete _leftPtr; delete _rightPtr;}
public:
    Expr* getLeftOperand(){return _leftPtr;};
    Expr* getRightOperand(){return _rightPtr;};
    
};


#endif /* BINARYEXPR_H */

