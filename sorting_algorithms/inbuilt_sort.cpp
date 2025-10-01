#include<iostream>
#include<algorithm>
using namespace std;

//O(nlogn)
int main(){
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    int arr[n];

    cout<<"enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr, arr+n, greater<int>());
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}