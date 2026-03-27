#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H

#include <iostream>
using namespace std;

class UniversityMember{
    string name;
    int memberID;
    public:
    UniversityMember(string name,int memberID);
    virtual ~UniversityMember();

    string getName() const;
    int getMemberID() const;
    //pure virtual function
    virtual void displayRole()=0;
};


#endif