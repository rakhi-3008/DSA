#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter length of array: ";
    cin>>n;         //dynamically create array

    int marks[n];
    // int n = sizeof(marks)/sizeof(int); //size of array

    //input
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }
    //output
    for(int i=0; i<n; i++){
        cout<<marks[i]<<" ";
    }

    return 0;
}