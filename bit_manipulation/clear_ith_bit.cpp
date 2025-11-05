#include<iostream>
using namespace std;

int clearIthBit(int num, int i){
    int bitMask=~(1<<i);
    return num & bitMask;
}

int main(){
    int num,i;
    cout<<"enter number: ";
    cin>>num;

    cout<<"enter pos(0-indexd): ";
    cin>>i;

    cout<<clearIthBit(num, i);
    return 0;
}