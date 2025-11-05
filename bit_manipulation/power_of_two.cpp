#include<iostream>
using namespace std;

bool isPower2(int num){
    if((num & (num-1))==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    // int num,i;
    // cout<<"enter number: ";
    // cin>>num;

    cout<<isPower2(8)<<endl;
    cout<<isPower2(19)<<endl;
    
    return 0;
}