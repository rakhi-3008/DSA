#include<iostream>
using namespace std;

int tP(int n){
    if(n==0 || n==1){   //2xn
        return 1;
    }
    // //vertical
    // int ans1=tP(n-1);

    // //horizontal
    // int ans2=tP(n-2);

    // return ans1+ans2;

    return tP(n-1)+tP(n-2);
}

int main(){
    int n;
    cout<<"enter value of n: ";
    cin>>n;
    cout<<"no. of ways: "<<tP(n);
    return 0;
}