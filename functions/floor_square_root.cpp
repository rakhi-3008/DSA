#include<iostream>
using namespace std;
// time complexity is root n
int floorSqrt(int x){
    if(x==0 || x==1){
        return x;
    }

    int i=1, result=1;

    while(result<=x){
        i++;
        result=i*i;
    }

    return i-1;
}

int main(){
    int n;
    cout<<"enter number to calculate square root: ";
    cin>>n;

    cout<<"ans= "<<floorSqrt(n);

    return 0;
}