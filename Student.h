#ifndef STUDENT_H
#define STUDENT_H
#include "UniversityMember.h"

//inheritance and using virtual for diamond problem
class Student: virtual public UniversityMember{
    double cgpa;
    public:
    Student(string name,int memberID,double cgpa);
    double getCGPA() const;
    void updateCGPA(double newCGPA);
    void displayRole() override;
};

#endif