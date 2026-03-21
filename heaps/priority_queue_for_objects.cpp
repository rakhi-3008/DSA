#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;


class Student{
public:
    string name;
    int marks;

    Student(string name, int marks){
        this->name=name;
        this->marks=marks;
    }

    bool operator <(const Student &obj) const{  //maxHeap based on the basis of max. marks
        return this->marks<obj.marks;
    }
};

int main(){
    priority_queue<Student> pq;

    pq.push(Student("ajay", 89));
    pq.push(Student("bjay", 29));
    pq.push(Student("cjay", 49));
    pq.push(Student("djay", 99));

    while(!pq.empty()){
        cout<<"top = "<<pq.top().name<<","<<pq.top().marks<<endl;
        pq.pop();
    }

    return 0;
}