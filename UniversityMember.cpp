#include "UniversityMember.h"

//Constructor
UniversityMember::  UniversityMember(string name,int memberID){
    //this pointer
    this->name=name;
    this->memberID=memberID;
}

//Destructor
UniversityMember:: ~UniversityMember(){
    cout<<"Object Destroyed"<<endl;
}

//Getters
string UniversityMember:: getName() const{
    return name;
}

int UniversityMember:: getMemberID() const{
    return memberID;
}