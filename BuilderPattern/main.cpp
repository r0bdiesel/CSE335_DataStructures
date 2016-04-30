
#include <cstdlib>
using namespace std;
#include <string>
#include <iostream>
#include "Node.h"
#include "Builder.h"
#include "ExpressionBuilder.h"
#include "ExpParser.h"

int main(int argc, char** argv) {
    ExpBuilder builder;
    ExpParser parser;
    parser.setBuilder(&builder);
    parser.parse("(((3+5)*7)-(6/5))");
    Node* root=builder.getExpression();
    root->print();
    return 0;
}

