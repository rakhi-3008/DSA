#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter length of array: ";
    cin>>n;
    int array[n];

    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    int tar;
    cout<<"enter target: ";
    cin>>tar;

    cout<<"element found at "<<linearSearch(array, n, tar)<<" index";

    return 0;
}