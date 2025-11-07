#include<iostream>
using namespace std;

class Car{
public:
    string name;
    string color;
    int *mileage;       //heap m hai

    Car(string name, string color){       //memory allocation happens when constructor is called
        this->name=name;
        this->color=color;
        mileage=new int ;   //dynamic allocation
        *mileage=12;
    }
//custom constructor
    Car(Car &original){
        cout<<"copying orginal to new..\n";
        name=original.name;
        color=original.color;
        mileage=original.mileage;
    }
};

int main(){
    Car c1("bmw", "black");
    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    *c2.mileage=10;     //change kiya c2 m par c1 bhi change hou jaegi 10 
    cout<<*c1.mileage<<endl;

    return 0;
}