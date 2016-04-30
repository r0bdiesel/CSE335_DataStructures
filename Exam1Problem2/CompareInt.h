
#ifndef COMPAREINT_H
#define COMPAREINT_H

using namespace std;
#include "Substringinterface.h"
#include <vector>

class CompareInt:public SubstringInterface{
protected:
        vector<int> setA;
        vector<int> setB;
public:
    CompareInt(vector<int>& A,vector<int>& B):setA(A),setB(B){}
        virtual unsigned int getSizeA() const{return setA.size();}
        virtual unsigned int getSizeB() const{return setB.size();}
        virtual bool isEqual(int i,int j) const{
            if (setA[i]==setB[j]){return true;}
            else{return false;}
        }
};


#endif /* COMPAREINT_H */

