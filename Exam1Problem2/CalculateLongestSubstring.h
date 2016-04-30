
#ifndef CALCULATELONGESTSUBSTRING_H
#define CALCULATELONGESTSUBSTRING_H


#include "Substringinterface.h"

class CalculateLongestSubstring{
private:
    int max(int a, int b){return (a > b)? a : b;}//returns true if a>b false otherwise
public:
    int LCSubStr(SubstringInterface* data){
        unsigned int m =  data->getSizeA();
        unsigned int n = data->getSizeB();
        int count[m+1][n+1];
        int result = 0;
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){count[i][j] = 0 ;}
                else if (data->isEqual(i-1,j-1)){
                    count[i][j] =count[i-1][j-1]+1;
                    result = max(result,count[i][j]);
                }
                else count[i][j]=0;
            }
        }
        return result;
    }
};


#endif /* CALCULATELONGESTSUBSTRING_H */

