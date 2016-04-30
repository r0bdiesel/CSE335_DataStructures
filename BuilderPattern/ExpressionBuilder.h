
#ifndef EXPRESSIONBUILDER_H
#define EXPRESSIONBUILDER_H
#include <stack>
#include <iostream>
#include "Node.h"
#include "Builder.h"

class ExpBuilder:public Builder{
protected:
    stack<Node*> expStack;
public:
    virtual void addOperand(string operand){
        Node* newOperand =new Node(operand);
        expStack.push(newOperand);
    }
    virtual void addLiteral(string literal){
        Node* newOperand = new Node(literal);
        expStack.push(newOperand);
    }
    virtual void addLeftParenthesis(){}
    virtual void addRightParenthesis(){
        Node* rightChild =expStack.top();
        expStack.pop();
        Node* parent = expStack.top();
        expStack.pop();
        Node* leftChild = expStack.top();
        expStack.pop();
        parent->setLeftChild(leftChild);
        parent->setRightChild(rightChild);
        expStack.push(parent);
    }
    virtual Node* getExpression(){
        Node* root = expStack.top();
        expStack.pop();
        return root;
    }
};


#endif /* EXPRESSIONBUILDER_H */

