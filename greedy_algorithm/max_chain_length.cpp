#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second<p2.second;
}

int maxChainLength(vector<pair<int, int>> pairs){
    int chainLength=1;
    sort(pairs.begin(), pairs.end(), compare);

    int currSecLen=pairs[0].second;
    for(int i=1; i<pairs.size(); i++){
        if(pairs[i].first>currSecLen){  //non-overlapping
            chainLength++;
            currSecLen=pairs[i].second;
        }
    }
    return chainLength;
}

int main(){
    int n=5;
    vector<pair<int, int>> pairs(n, make_pair(0,0));
    pairs[0]=make_pair(5,24);
    pairs[1]=make_pair(39, 60);
    pairs[2]=make_pair(5, 28);
    pairs[3]=make_pair(27, 40);
    pairs[4]=make_pair(50, 90);

    cout<<"maximum chain length: "<<maxChainLength(pairs);

    return 0;
}