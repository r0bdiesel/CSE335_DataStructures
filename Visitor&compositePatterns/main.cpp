
#include <cstdlib>

using namespace std;
#include <iostream>
#include <assert.h>
#include "Add.h"
#include "Subtract.h"
#include "Multiply.h"
#include "Divide.h"
#include "Negate.h"
#include "Literal.h"
#include "EvaluationVisitor.h"
#include "PrintVisitor.h"


int main(int argc, char** argv) {
    Subtract* exleft = new Subtract(new Negate(new Multiply(new Literal(6), new Literal(5))),new Literal(20));
    Expr* ex = new Add(exleft,new Divide(new Literal(100),new Subtract(new Literal(58),new Literal(-20))));
    Expr* exleftright = exleft->getRightOperand();
    cout<< ex->compute() << endl;
    cout<< exleft->compute() << endl;
    cout<< exleftright->compute()<< endl;
    
    EvaluationVisitor ev;
    PrintVisitor pv;
    ex->accept(&ev);
    ex->accept(&pv);
    
    cout<<endl; cout<<"New: "<< ev.getValue() <<endl;
    exleft->accept(&ev);cout<<"New:"<< ev.getValue() <<endl;
    exleftright->accept(&ev);cout<<"New:"<< ev.getValue() <<endl;
    delete ex;
    
    
    
    return 0;
}

