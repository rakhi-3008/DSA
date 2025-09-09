// "&" address of operator gives the address of a variable.
// heaxadcimal numaber (base 16) 0-9 and a to f
// pointers special variable that stores address of another variable.
// pointers 8 byte 
//deference operator -gets the value pf the variable pointed by any pointer


#include<iostream>
using namespace std;

int main(){
    int a=10;
    char name='r';
    int *ptr=&a;
    int  **pptr =&ptr;  //pointer to pointer

    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<pptr<<endl;


    //deference 
    cout<<*ptr<<endl;
    cout<<*pptr<<endl;

    int *ptr1=NULL;      //null pointer stores 0 address, also initialize with 0
    cout<<ptr1<<"\n";
    // cout<<*ptr1;    //segmentation fault
    
    
    return 0;
}