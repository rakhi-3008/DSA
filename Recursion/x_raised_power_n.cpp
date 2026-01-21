#include<iostream>
using namespace std;

int pow(int x, int n){
    if(n==0) return 1;

    int halfPow=pow(x, n/2);
    int halfPowSquare=halfPow*halfPow;

    if(n%2!=0){
        return x*halfPowSquare;
    }

    return halfPowSquare;
}

int main(){
    int x=2;
    int n=10;
    int result=pow(x,n);
    cout<<result;

    return 0;
}