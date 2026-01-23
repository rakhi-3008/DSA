#include<iostream>
using namespace std;

int partition(int arr[], int st, int end){
    int pivot=arr[end];
    int i=st-1;

    for(int j=st; j<=end-1; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[end]);

    return i;
}

void quickSort(int arr[], int st, int end){
    if(st>=end){
        return;
    }

    int pivotIdx= partition(arr, st, end);
    quickSort(arr, st, pivotIdx-1); //left half
    quickSort(arr, pivotIdx+1, end);    //right half
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={6, 3, 7, 5, 2, 4};
    int n=6;

    quickSort(arr, 0, n-1);
    printArray(arr, n);

    return 0;
}