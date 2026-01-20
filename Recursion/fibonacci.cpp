#include<iostream>
using namespace std;

int fibo(int n){
    if(n==1 || n==0){
        return n;
    }

    return fibo(n-1)+fibo(n-2);
}

int main(){
    int result=fibo(5);
    cout<<result;
    
    return 0;
}