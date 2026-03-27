#include "Student.h"

//Constructor
Student:: Student(string name,int memberID,double cgpa)
    :UniversityMember(name,memberID)    //using iniitializer list
    {
        //use this pointer
        this->cgpa=cgpa;
}

//Getters
double Student:: getCGPA() const{
    return cgpa;
}

//Function

void Student:: updateCGPA(double newCGPA){
    cgpa=newCGPA;
}

//function overriden in derived class
void Student:: displayRole() {
    cout<<"Role: Student"<<endl;
}