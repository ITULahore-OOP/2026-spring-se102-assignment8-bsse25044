#include "Department.h"

//Constructor
Department:: Department(string departmentName){
    this->departmentName=departmentName;
    memberCount=0;
}

void Department:: addMember(UniversityMember* member){
    //check if it's within range
    if(memberCount < 50){
       members[memberCount]=member;
       memberCount++;
    }
    else{
        cout<<"List is full"<<endl;
    }
}

void Department:: displayAllRoles() const{
    for(int i=0;i<memberCount;i++){
        members[i]->displayRole();
    }
}