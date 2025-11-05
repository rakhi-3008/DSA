#include<iostream>
using namespace std;

int setIthBit(int num, int i){
    int bitMask=1<<i;
    return num | bitMask;
}

int main(){
    int num,i;
    cout<<"enter number: ";
    cin>>num;

    cout<<"enter pos(0-indexd): ";
    cin>>i;

    cout<<setIthBit(num, i);
    return 0;
}