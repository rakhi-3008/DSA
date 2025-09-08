#include<iostream>
using namespace std;

void decTobin(int decNum){
    int n=decNum;
    int binNum=0;
    int pow=1;
    
    while(n!=0){
        int Dig=n%2;
        binNum=binNum+Dig*pow;
        n=n/2;
        pow=pow*10;
    }
    cout<<"decimal form of "<<decNum<<" is "<<binNum;
}

int main(){
    int dec;
    cout<<"enter a decimal number: ";
    cin>>dec;
    decTobin(dec);
    return 0;
}