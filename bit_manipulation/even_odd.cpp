#include<iostream>
using namespace std;

void oddOrEven(int n){
    if((n & 1)==0){
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;
    }
}

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    oddOrEven(num);
    return 0;
}