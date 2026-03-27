#include "Staff.h"

//Constructor
Staff:: Staff(string name,int memberID,double salary,AccessCard card)
    :UniversityMember(name,memberID),card(card)
{
    //use this pointer
    this->salary=salary;
}

//Getters
double Staff:: getSalary() const{
    return salary;
}

//function overriden in derived class
void Staff:: displayRole(){
    cout<<"Role: Staff"<<endl;
}

//function
void Staff:: displayCard() const{
    //calling card function
    card.displayCardInfo();
}