#include<iostream>
using namespace std;

void printArray(int *array, int n){
    for(int i=0; i<n; i++){
        cout<<*array<<" ";
        // cout<<*(array+i)<<" ";
        array++;
    }
}

int main(){

    int a=10;
    int *ptr1=&a;
    cout<<ptr1<<endl;
    ptr1++;      //1 int++
    cout<<ptr1<<endl;
    ptr1--;
    cout<<ptr1<<endl;

    ptr1=ptr1+3;
    cout<<ptr1<<endl;
    ptr1=ptr1-3;
    cout<<ptr1<<endl;

    int *ptr2=ptr1+3;
    cout<<ptr2<<endl;
    cout<<ptr2-ptr1<<endl;

    cout<<(ptr2>ptr1)<<endl;        //yes : true : 1

    // char ch='s';
    // char *ptr2=&ch;
    // cout<<ptr2<<endl;
    // ptr2++;
    // cout<<ptr2<<endl;

    int arr[]={1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(int);
    printArray(arr, n);

    return 0;
}