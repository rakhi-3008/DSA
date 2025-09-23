#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter length of array: ";
    cin>>n;
    int marks[n];
    //input
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }
    //find largest 
    int largest=marks[0];
    for(int i=0; i<n; i++){
        if(marks[i]>largest){
            largest=marks[i];
        }
    }
    //output
    for(int i=0; i<n; i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;

    cout<<"maximum number: "<<largest;
    return 0;

}