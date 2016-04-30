
#ifndef COMPARESTR_H
#define COMPARESTR_H

using namespace std;
#include "Substringinterface.h"
#include <vector>
#include <string>
class CompareStr:public SubstringInterface{
protected:
        vector<char> stringsetA;
        vector<char> stringsetB;
public:
    CompareStr(vector<char>& A,vector<char>& B):stringsetA(A),stringsetB(B){}
    
        virtual unsigned int getSizeA() const{return stringsetA.size();}
        
        virtual unsigned int getSizeB() const{return stringsetB.size();}
        
        virtual bool isEqual(int i,int j) const{
            if (stringsetA[i]==stringsetB[j]){return true;}
            else{return false;}
        }
};

#endif /* COMPARESTR_H */

