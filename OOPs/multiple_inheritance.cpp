#include<iostream>
using namespace std;

class Teacher{
public:
    int salary;
    string subject;
};

class Student{
public:
    int rollno;
    float cgpa;
};

class TA: public Teacher, public Student{
public:
    string name;
};

int main(){
    TA t1;
    t1.name="rakhi panwar";
    t1.rollno=81;
    t1.cgpa=9.9;
    t1.salary=30000;
    t1.subject="computer science";

    cout<<t1.cgpa<<endl;
     cout<<t1.name<<endl;
      cout<<t1.rollno<<endl;
       cout<<t1.salary<<endl;
        cout<<t1.subject<<endl;
        
    return 0;
}