#ifndef ACCESSCARD_H
#define ACCESSCARD_H
#include <iostream>
using namespace std;

class AccessCard{
    string cardID;
    int accessLevel;
    public:
    AccessCard(string cardID,int accessLevel);
    string getCardID() const;
    int getAccessLevel() const;
    void displayCardInfo() const; 
};

#endif