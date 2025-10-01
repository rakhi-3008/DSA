#include<iostream>
using namespace std;
//ascending order O(n^2)
void insertionSortA(int arr[], int n){
    for(int i=1; i<n; i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        // arr[prev+1]=curr;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
//descending order O(n^2)
void insertionSortB(int arr[], int n){
    for(int i=1; i<n; i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]<curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        // arr[prev+1]=curr;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    int arr[n];

    cout<<"enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    insertionSortA(arr, n);
    cout<<endl;
    insertionSortB(arr, n);

    return 0;
}