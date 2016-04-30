

#ifndef SUBSTRINGINTERFACE_H
#define SUBSTRINGINTERFACE_H

class SubstringInterface{
public:
    virtual unsigned int getSizeA() const=0;
    virtual unsigned int getSizeB() const=0;
    virtual bool isEqual(int,int ) const=0;
};


#endif /* SUBSTRINGINTERFACE_H */

