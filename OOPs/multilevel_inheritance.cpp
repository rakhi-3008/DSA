#include<iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout<<"eats\n";
    }
    void breathe(){
        cout<<"breathes\n";
    }
};

class Mammal : public Animal{
public:
    string bloodType;

    Mammal(){
        bloodType="warm\n";
    }
};

class Dog : public Mammal{
public:
    void tailWag(){
        cout<<"dog wag his tail\n";
    }
};

int main(){
    Dog d1;
    d1.breathe();
    d1.eat();
    d1.tailWag();
    cout<<d1.bloodType<<endl;

    return 0;
}