#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include "TutoringSession.h"

class Department{
    string departmentName;
    UniversityMember* members[50];
    int memberCount;
    public:
    Department(string departmentName);
    void addMember(UniversityMember* member);
    void displayAllRoles() const;
};

#endif