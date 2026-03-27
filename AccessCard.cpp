#include "AccessCard.h"

//Constructor
AccessCard:: AccessCard(string cardID,int accessLevel){
    //this pointer
    this->cardID=cardID;
    this->accessLevel=accessLevel;
}

//Getters
string AccessCard:: getCardID() const{
    return cardID;
}

int AccessCard:: getAccessLevel() const{
    return accessLevel;
}

//Functions
void AccessCard:: displayCardInfo() const{
    cout<<"Card ID: "<<cardID<<endl;
    cout<<"Access Level: "<<accessLevel<<endl;
}