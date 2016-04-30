
#include <cstdlib>
#include <iostream>
using namespace std;

class A{
public:
    int PublicDataInA;
protected:
   int ProtectedDataInA;
private:
    int PrivateDataInA;
public:
    A(int a, int b,int c):PublicDataInA(a),ProtectedDataInA(b),PrivateDataInA(c){}              
};

class PublicB: public A{
public:
    PublicB(int a, int b,int c):A(a,b,c){
    }
    void print(){
        cout<<PublicDataInA<<endl; 
        cout<<ProtectedDataInA<<endl;
        // cout<<PrivateDataInA<endl;//cannot access private data in A,causes compiler error
    }
};
class ProtectedB:protected A{
public:
    ProtectedB(int a, int b,int c):A(a,b,c){
    }
    void print(){
        cout<<PublicDataInA<<endl; 
        cout<<ProtectedDataInA<<endl;
        // cout<<PrivateDataInA<endl;//cannot access private data in A,causes compiler error
    }
};
class PrivateB:private A{
public:
    PrivateB(int a, int b,int c):A(a,b,c){
    }
    void print(){
        cout<<PublicDataInA<<endl; 
        cout<<ProtectedDataInA<<endl;
        // cout<<PrivateDataInA<endl;//cannot access private data in A,causes compiler error
    }
};
class PublicC:public ProtectedB{
public:
    PublicC(int a, int b, int c):ProtectedB(a,b,c){
    }
    void print(){
        cout<<PublicDataInA<<endl;
        cout<<ProtectedDataInA<<endl;
        // cout<<PrivateDataInA<endl;//cannot access private data in A,causes compiler error
    }
};


int main(int argc, char** argv) {
    A objA(1,2,3);
    cout<<objA.PublicDataInA<<endl;
    //cout<<objA.ProtectedDataInA<endl;//protected data not ope to client
    // cout<<PrivateDataInA<endl;//cannot access private data not open to client
    PublicB objPublicB(10,20,30);
    cout<<objPublicB.PublicDataInA<<endl;
    //cannot access protected or private data from client 
    ProtectedB objProtectedB(10,20,30);
    //cout<<objProtectedB.PublicDataInA//data is made protected in ProtectedB, so client cannot access it
    PublicC objPublicC(100,200,300);
    //cout<<objPublicC.PublicDataInA<<endl; cannot access because data is protected after inheritnce from ProtectedB
    
    A*aptr;
    aptr = &objPublicB;
    //aptr=&objProtectedB; //cannot point to ProtectedB using A pointer
    ProtectedB*bptr;
    bptr = &objProtectedB;
    
    return 0;
}

