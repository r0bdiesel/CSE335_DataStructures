
#include <cstdlib>
#include <vector>
using namespace std;
#include "Substringinterface.h"
#include "CompareInt.h"
#include "CompareStr.h"
#include "CalculateLongestSubstring.h"
#include <iostream>

int main(int argc, char** argv) {
    vector<char> seta={'s','t','u','d','y','i','n','g',' ','h','a','r','d'};
    vector<char> setb={'p','l','a','y','i','n','g'};
    vector<int> set1={15,40,20,30,25};
    vector<int> set2={40,20,30,1,6};
    CalculateLongestSubstring calclongestsub;
    CompareStr* cstr = new CompareStr(seta,setb);
    cout<<"length of common characters: "<<calclongestsub.LCSubStr(cstr)<<endl;
    CompareInt* cint = new CompareInt(set1,set2);
    cout<<"length of common integers: "<<calclongestsub.LCSubStr(cint)<<endl;
    return 0;
}

