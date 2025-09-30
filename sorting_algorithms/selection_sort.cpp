#include<iostream>
using namespace std;
//ascending order
void selectionSortA(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIdx=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIdx])
                minIdx=j;
        }
        swap(arr[i], arr[minIdx]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
//descending order
void selectionSortB(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int maxIdx=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]>arr[maxIdx])
                maxIdx=j;
        }
        swap(arr[i], arr[maxIdx]);
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

    selectionSortA(arr, n);
    cout<<endl;
    selectionSortB(arr, n);

    return 0;
}