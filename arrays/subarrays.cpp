#include<iostream>
using namespace std;

void printSubarrays(int array[], int n){
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         cout<<"("<<i<<","<<j<<")";
    //     }
    //     cout<<endl;
    // }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<array[k];
            }
            cout<<",";
        }
       cout<<endl;
    }
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
    printSubarrays(arr, n);

    return 0;
}
//time complexity = O(n^3)