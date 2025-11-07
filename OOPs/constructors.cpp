#include<iostream>
using namespace std;

class Car{
    string name;
    string color;
public:
    Car(){
        cout<<"constructor without parameter\n";
    }
    
    Car(string nameVal, string colorVal){       //memory allocation happens when constructor is called
        cout<<"constructor called with parameters. object being created..\n";
        name=nameVal;
        color=colorVal;
    }

    // Car(string name, string color){
    //     cout<<"constructor called. object being created..\n";
    //     this->name=name;        //this points to object      // *this.name
    //     this->color=color;
    // }

    void start(){
        cout<<"car has started.."<<endl;
    }
    void stop(){
        cout<<"car has stopped.."<<endl;
    }
    //getter
    string getName(){
        return name;
    }
};

int main(){
    Car c0;     //non parameter
    Car c1("bmw", "black");     //parameter
    cout<<"car name: "<<c1.getName()<<endl;

    return 0;
}