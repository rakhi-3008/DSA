#include<iostream>
using namespace std;

void func(int arr[]){       //void func(int *arr)
    arr[0]=1000;
}

void printArray(int array[], int n){
    // cout<< sizeof(array) <<endl;        //size of integer pointer

    // int n=sizeof(array)/sizeof(int);
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    cout<<*arr<<endl;       //arr[0]
    cout<<*(arr+1)<<endl;       //arr[1]
    cout<<*(arr+2)<<endl;       ///arr[2]

    func(arr);      //passing array name is equivalent to passing the pointer

    printArray(arr, n);

    return 0;
}