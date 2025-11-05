#include<iostream>
using namespace std;

void updateIthBit(int num, int i, int val){
    num= num & ~(1<<i);
    num= num | (val<<i);
    cout<<num<<endl;
}

int main(){
    int num,i,val;
    cout<<"enter number: ";
    cin>>num;

    cout<<"enter pos(0-indexd): ";
    cin>>i;

    cout<<"enter value(0 or 1): ";
    cin>>val;

    updateIthBit(num, i, val);
    return 0;
}