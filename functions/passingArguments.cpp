//pass by value- parameter is a copy of actual argument variable in memory.
//pass by reference- pass the refernece of argument to the function.
//reference variable- an alternate name(alias) of already existing variable
#include<iostream>
using namespace std;
//pass by value
void changeA(int x){
    x=20;
    cout<<x<<endl;
}
//pass by reference
void changeB(int *y){
    *y=20;
    cout<<*y<<endl;
}

int main(){
    int a=10;
    changeA(a);
    cout<<a<<"\n";

    int b=50;
    changeB(&b);
    cout<<b<<endl;
    
    int c=30;       //c and d refers to same memory location
    int &d=c;
    cout<<c<<endl;
    cout<<d<<endl;

    
    return 0;
}