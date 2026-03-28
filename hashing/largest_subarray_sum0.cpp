#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int largestSubarray0(vector<int> arr){
    unordered_map<int, int> m;  //<sum, idx>
    int sum=0;
    int ans=0;
    for(int j=0; j<arr.size(); j++){
        sum+=arr[j];
        if(m.count(sum)){
            int currLength = j-m[sum];
            ans=max(ans, currLength);
        }else{
            m[sum]=j;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10};

    cout<<largestSubarray0(arr)<<endl;

    return 0;
}
