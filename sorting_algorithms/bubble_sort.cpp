#include<iostream>
using namespace std;
//ascending order
void bubbleSortA(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool isSwap=false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            return;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
//descending order
void bubbleSortD(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool isSwap=false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            return;
        }
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

    bubbleSortA(arr, n);
    cout<<endl;
    bubbleSortD(arr, n);

    return 0;
}