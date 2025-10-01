#include<iostream>
#include<climits>
using namespace std;

void countSort(int arr[], int n){
   
    int minVal=INT_MAX, maxVal=INT_MIN;
    
    int freq[1000]={0};

    //O(n)
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
        minVal=min(minVal, arr[i]);
        maxVal=max(maxVal, arr[i]);
    }

    //O(range)
    for(int i=minVal, j=0; i<=maxVal; i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
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

    countSort(arr, n);
    return 0;
}