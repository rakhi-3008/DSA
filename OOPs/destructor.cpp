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
//destructor--to deallocate memory
    ~Car(){
        cout<<"deleting object..\n";
        if(mileage!=NULL){
            delete mileage;
            mileage=NULL;
        }
    }
};

int main(){
    Car c1("bmw", "black");
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;

    return 0;
}