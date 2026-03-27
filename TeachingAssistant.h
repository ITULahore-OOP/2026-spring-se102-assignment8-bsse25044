#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H
#include "Staff.h"
#include "Student.h"

//multiple inheritance
class TeachingAssistant : public Staff,public Student{
    int workingHours;
    public:
    TeachingAssistant(string name,int memberID,double cgpa,double salary,AccessCard card,int workingHours);
    void displayRole() override;
    void gradeAssignment(int score);
    void gradeAssignment(string letterGrade);
};

#endif