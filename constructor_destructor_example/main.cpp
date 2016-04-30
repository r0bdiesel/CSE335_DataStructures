
#include <cstdlib>
#include "Base.h"
#include "Derived.h"

void f(){
    cout<<"in function  f: ";
    Derived derivedobj(3,"alice","cooper","sales",2012);
}
using namespace std;
int main(int argc, char** argv) {
    Derived derivedobj1(2,"john","smith","sales",2010);
    
    f();
   cout<<"1"<<endl;
    return 0;
}

