#ifndef STAFF_H
#define STAFF_H

#include "UniversityMember.h"
#include "AccessCard.h"

//inheritance and using virtual for diamond problem
class Staff: virtual public UniversityMember{
    double salary;
    AccessCard card;
    public:
    Staff(string name,int memberID,double salary,AccessCard card);
    double getSalary() const;
    void displayRole() override;
    void displayCard() const;
    

};

#endif