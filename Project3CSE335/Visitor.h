
#ifndef VISITOR_H
#define VISITOR_H
//visitor pattern

class Group;
class Department;//forward declaration
class Employee;
class Manager;

class Visitor{
public:
    virtual void VisitEmployee(Employee*)=0;
    virtual void VisitManager(Manager*)=0;
    virtual void VisitGroup(Group*)=0;
    virtual void VisitDepartment(Department*)=0;
    
};



#endif /* VISITOR_H */

