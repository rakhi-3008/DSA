#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarraySumK(vector<int> arr, int k){
    unordered_map<int, int> m;  //<sum, count>
    int sum=0;
    int ans=0;
    m[0]=1;
    for(int j=0; j<arr.size(); j++){
        sum+=arr[j];
        if(m.count(sum-k)){
            ans+=m[sum-k];
        }
        if(m.count(sum)){
            m[sum]++;
        }else{
            m[sum]=1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {10, -2, 2, -20, 10};
    int k=-10;

    cout<<subarraySumK(arr, k)<<endl;

    return 0;
}
