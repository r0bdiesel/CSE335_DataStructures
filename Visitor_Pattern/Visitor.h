
#ifndef VISITOR_H
#define VISITOR_H
//visitor pattern

class File;
class Directory;//forward declaration

//#include "File.h"
//#include "Directory.h"

class Visitor{
public:
    virtual void VisitFile(File*)=0;
    virtual void VisitDirectory(Directory*)=0;
};

#endif /* VISITOR_H */

