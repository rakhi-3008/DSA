#include<iostream>
using namespace std;

class Parent{
public:
    void show(){
        cout<<"parent class show."<<endl;
    }
};

class Child: public Parent{
public:
    void show(){
        cout<<"child class show."<<endl;
    }
};

int main(){
    Child c1;
    c1.show();

    return 0;
}