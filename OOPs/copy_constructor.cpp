#include<iostream>
using namespace std;

class Car{
public:
    string name;
    string color;

    Car(string name, string color){       //memory allocation happens when constructor is called
        this->name=name;
        this->color=color;
    }
//custom constructor
    Car(Car &original){
        cout<<"copying orginal to new..\n";
        name=original.name;
        color=original.color;
    }
};

int main(){
    Car c1("bmw", "black");
    // Car c2(c1);     //copy constructor
    Car c2(c1);     //custom constructor
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;

    return 0;
}