#include<iostream>
using namespace std;

int countSetBits(int num){
    int count =0;
    while(num>0){
        int lastDigit= num & 1;
        count+=lastDigit;
        num=num>>1;
    }
    return count;

}

int main(){
    int num,i,val;
    cout<<"enter number: ";
    cin>>num;

    cout<<countSetBits(num)<<endl;

    return 0;
}