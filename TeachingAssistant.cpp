#include "TeachingAssistant.h"

//Constructor
TeachingAssistant:: TeachingAssistant(string name,int memberID,double cgpa,double salary,AccessCard card,int workingHours)
    :UniversityMember(name,memberID),Staff(name,memberID,salary,card),Student(name,memberID,cgpa)
{
    //use this pointer
    this->workingHours=workingHours;
}

//Function
void TeachingAssistant:: displayRole(){
    cout<<"Role: Teaching Assistant"<<endl;
}

//Compile Time Polymorphism
void TeachingAssistant:: gradeAssignment(int score){
    cout<<"numeric score: "<<score<<"/100"<<endl;
}

//compile-time Polymorphism
void TeachingAssistant:: gradeAssignment(string letterGrade){
    cout<<"letter grade: "<<letterGrade<<endl;
}