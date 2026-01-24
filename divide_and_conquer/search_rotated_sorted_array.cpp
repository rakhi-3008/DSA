#include<iostream>
using namespace std;

int search(int arr[], int st, int end, int target){
    if(st>end){
        return -1;
    }

    int mid= st+ (end-st)/2;

    if(arr[mid]==target){
        return mid;
    }

    if(arr[st]<=arr[mid]){
        if(arr[st]<=target && target<arr[mid]){
            return search(arr, st, mid-1, target);
        }else{
            return search(arr, mid+1, end, target);
        }
    }else{
        if(arr[mid]<target && target<=arr[end]){
            return search(arr, mid+1, end, target);
        }else{
            return search(arr, st, mid-1, target);
        }
    }
}

int main(){
    int arr[7]={4, 5, 6, 7, 0, 1, 2};
    int n=7;
    int idx=search(arr, 0, n-1, 0);
    cout<<idx<<endl;

    return 0;
}