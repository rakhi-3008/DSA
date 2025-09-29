#include<iostream>
#include <climits>
using namespace std;

//brute force approach O(n^3)
void maxSubarraySum1(int array[], int n){
    int maxSum= INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int currSum=0;
            for(int k=i; k<=j; k++){
                currSum+=array[k];
            }
            // cout<<currSum<<",";
            maxSum=max(maxSum, currSum);
        }
       cout<<endl;
    }
    cout<<"maximum subarray sum ="<<maxSum<<endl;
}

//slightly optimized O(n^2)
void maxSubarraySum2(int array[], int n){
    int maxSum= INT_MIN;
    for(int i=0; i<n; i++){
        int currSum=0;
        for(int j=i; j<n; j++){
            currSum+=array[j];
            // cout<<currSum<<",";
            maxSum=max(maxSum, currSum);
        }
       cout<<endl;
    }
    cout<<"maximum subarray sum ="<<maxSum<<endl;
}

//kadane's algo O(n)
void maxSubarraySum3(int array[], int n){
    int maxSum= INT_MIN;
    int currSum=0;

    for(int i=0; i<n; i++){
            currSum+=array[i];
            maxSum=max(maxSum, currSum);
            if(currSum<0){
                currSum=0;
            }
    }
    cout<<"maximum subarray sum ="<<maxSum<<endl;
}

int main(){
    int n;
    cout<<"enter length of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    maxSubarraySum1(arr, n);
    maxSubarraySum2(arr, n);
    maxSubarraySum3(arr, n);
    return 0;
}