#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int st=0, end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){       //key found
            return mid;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
}

int main(){
    int array[]={1,2,3,4,5};
    int n=sizeof(array)/sizeof(int);

    cout<<binarySearch(array, n, 5);
    return 0;
}