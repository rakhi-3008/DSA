#include<iostream>
using namespace std;

int getIthBit(int num, int i){
    int bitMask=1<<i;
    if((num & bitMask)>0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num,i;
    cout<<"enter number: ";
    cin>>num;

    cout<<"enter pos(0-indexd): ";
    cin>>i;

    cout<<getIthBit(num, i);
    return 0;
}