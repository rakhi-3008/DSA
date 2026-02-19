#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second>p2.second;
}

int jobSequencing(vector<pair<int, int>> jobs){
    sort(jobs.begin(), jobs.end(), compare);

    int maxPro=jobs[0].second;
    int safeDeadline=jobs[0].first;

    for(int i=1; i<jobs.size(); i++){
        if(jobs[i].first>safeDeadline){
            maxPro+=jobs[i].second;
            safeDeadline++;
        }
    }
    return maxPro;
}

int main(){
    int n=4;
    vector<pair<int, int>> jobs(n, make_pair(0,0));

    jobs[0]=make_pair(4, 80);
    jobs[1]=make_pair(1, 10);
    jobs[2]=make_pair(1, 40);
    jobs[3]=make_pair(1, 30);

    cout<<"max profit: "<<jobSequencing(jobs);

    return 0;
}