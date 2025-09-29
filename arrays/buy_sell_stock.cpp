#include<iostream>
#include<climits>
using namespace std;

void buySell(int arr[], int n){
    int bestBuy[n];
    bestBuy[0]= INT_MAX;
    for(int i=1; i<n; i++){
        bestBuy[i]=min(bestBuy[i-1], arr[i-1]);
    }

    int maxProfit=0;
    for(int i=0; i<n; i++){
        int currProfit=arr[i]-bestBuy[i];
        maxProfit=max(maxProfit, currProfit);
    }
    cout<<"max profit="<<maxProfit<<endl;
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

    buySell(arr, n);
    return 0;
}