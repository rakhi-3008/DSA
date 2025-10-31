#include<iostream>
using namespace std;

int* func(){            // returning pointer
    int *ptr=new int;
    *ptr=1200;
    cout<<"ptr points to "<<*ptr<<endl;

    delete ptr;
    return ptr;
}

int main(){
    int *x=func();
    cout<<*x<<endl;     // not print 1200 because ptr deleted

    return 0;
}