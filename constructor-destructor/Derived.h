
#ifndef DERIVED_H
#define DERIVED_H
#include "Base.h"
class Derived:Base{
    public:
        Derived(const int num,const string& firstName,const string& lastName,const string& departmentName,const unsigned short hireYear):
        Base(num,firstName,lastName,departmentName,hireYear){
            cout<<"in derived constructor:"<<firstName<<endl;
        }
        virtual ~Derived(){
            cout<<"in derived destructor:"<<m_EmployeePtr->getFirstName()<<endl;
        }
        
};

#endif /* DERIVED_H */

