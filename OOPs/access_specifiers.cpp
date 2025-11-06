#include<iostream>
using namespace std;

//private
//public
//protected

class Student{      //by default private
    string name;
public:
    float cgpa;

    void getPercentage(){
        cout<<(cgpa*10)<<"%"<<endl;
    }
};

int main(){
    Student s1;
    cout<<sizeof(s1)<<endl;
    // s1.name="rakhi";     not directly accessed because it is private in class
    // cout<<s1.name<<endl;

    s1.cgpa=9.9;
    cout<<s1.cgpa<<endl;
    s1.getPercentage();

    return 0;
}