#include<iostream>
#include<vector>
using namespace std;

int lo(vector<int> arr, int i, int target){
    if(i==arr.size()){
        return -1;
    }
    int idxFound=lo(arr, i+1, target);

    if(idxFound==-1 && arr[i]==target){
        return i;
    }

    return idxFound;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    cout<<lo(arr, 0, 4);

    return 0;

}