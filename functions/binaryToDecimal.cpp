#include<iostream>
using namespace std;

void binToDec(int binNum){
    int n=binNum;
    int decNum=0;
    int pow=1;
    
    while(n!=0){
        int lastDig=n%10;
        decNum=decNum+lastDig*pow;
        pow=pow*2;
        n=n/10;
    }
    cout<<"decimal form of "<<binNum<<" is "<<decNum;
}

int main(){
    int bin;
    cout<<"enter a binary number\n";
    cin>>bin;
    binToDec(bin);
    return 0;
}