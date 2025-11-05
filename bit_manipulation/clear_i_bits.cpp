#include<iostream>
using namespace std;

int clearIBits(int num, int i){
    int bitmask= ~0<<i;
    num= num & bitmask;
    return num;
}

int main(){
    int num,i,val;
    cout<<"enter number: ";
    cin>>num;

    cout<<"enter pos: ";
    cin>>i;

    cout<<clearIBits(num, i)<<endl;

    return 0;
}