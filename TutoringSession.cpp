#include "TutoringSession.h"

//Constructor
TutoringSession:: TutoringSession(int sessionID,double durationMinutes,TeachingAssistant* ta,Student* student)
    :ta(ta),student(student)   
{
    //use this pointer
   this->sessionID=sessionID;
   this->durationMinutes=durationMinutes;
}

//Getter
double TutoringSession:: getDuration() const{
    return durationMinutes;
}

void TutoringSession:: displaySession() const{
    cout<<"SessionID : "<<sessionID<<endl;
    cout<<"Minutes: "<<durationMinutes<<endl;
}

//Operator Overloading
TutoringSession TutoringSession:: operator+(const TutoringSession& other){
    //return new object with sum of duration + other.duration
    return TutoringSession(sessionID,durationMinutes+other.durationMinutes,ta,student);
}

//non-member
bool operator>(TutoringSession s1,TutoringSession s2){
    //check duration minutes
    if(s1.durationMinutes > s2.durationMinutes){
        return true;
    }
    else{
        return false;
    }
}