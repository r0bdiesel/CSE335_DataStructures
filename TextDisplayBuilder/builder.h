#ifndef BUILDER
#define BUILDER

#include <string>

class Builder{
public:
    virtual void addString(string str)=0;
    virtual void addInteger(int int1)=0;
    virtual void addSeparator()=0;
    virtual string getExpression()=0;
    virtual void setFileName(string str)=0;
    virtual void makeFile()=0;
    virtual void addline()=0;
};


#endif // BUILDER

