#include "Department.h"

int main() {

    //creating access cards objects with access level 1 and  2
    cout<<"Creating access cards!"<<endl;
    AccessCard c1("CARD#1", 1);
    AccessCard c2("CARD#2", 2);

    //creating student objects
    cout<<"Creating students!"<<endl;
    Student student1("Ronaldo",7, 3.2);
    Student student2("Messi", 10, 2.6);


    cout<<"[Creating]: Staff Object"<<endl;
    //creating staff object
    Staff staff("Bilal", 11, 55050, c2);

    cout<<"[Creating]: Teaching Assistant Object"<<endl;
    //creaing teaching assistant
    TeachingAssistant ta1("Ayan",56,3.65, 27000, c1, 24);


    cout<<"[Creating]: Department Object"<<endl;
    //creating department object
    Department seDepartment("SE");


    //adding members
    seDepartment.addMember(&student1);
    seDepartment.addMember(&staff);
    seDepartment.addMember(&ta1);
    seDepartment.addMember(&student2);

    cout<<"\tDepartment Members"<<endl;
    seDepartment.displayAllRoles();   // run-time polymorphism

    cout<<"\tAssignment Grade(Numeric & Alphabet)"<<endl;
    //compile time polymorphism
    ta1.gradeAssignment(90);
    ta1.gradeAssignment("A");

    //creating tutoring sessions Objects
    TutoringSession t1(1, 80, &ta1, &student2);
    TutoringSession t2(2, 120, &ta1, &student1);

    cout<<"\tSession Comparison"<<endl;
    // calling  > operator
    if (t1 > t2)
        cout << "t1 has longer duration\n";
    else
        cout << "t2 has longer duration\n";

    //calling + operator 
    cout<<"\t Session Addition"<<endl; 
    TutoringSession session3 = t1 + t2;
    cout << "Total Duration: " << session3.getDuration() << endl;

    // display INfo
    cout<<"Combined Session Info:"<<endl;
    session3.displaySession();

    return 0;
}
