#include<iostream>
using namespace std;

class Shape{
public:
    virtual void draw()=0;   //abstract fxn or pure virtual fxn
};

class Circle: public Shape{
public:
    void draw(){
        cout<<"draw circle"<<endl;
    }
};

class Square: public Shape{
public:
    void draw(){
        cout<<"draw square"<<endl;
    }
};

int main(){
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();
    
    return 0;
}

