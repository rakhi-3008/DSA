#include<iostream>
using namespace std;

long long factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    
    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    long long fact=factorial(n);
    cout<<"factorial of "<<n<<" is "<<fact;
    return 0;
}