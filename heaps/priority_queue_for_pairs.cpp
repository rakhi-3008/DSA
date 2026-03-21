#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;

struct ComparePair{
    bool operator () (pair<string, int > &p1, pair<string, int> &p2){
        return p1.second<p2.second;
    }
};

int main(){
    priority_queue<pair<string, int>> pq;   //default maxHeap on the basis of first i.e string

    // priority_queue<pair<string, int>, vector<pair<string, int>>, ComparePair> pq;    //for maxHeap on the basis of second i.e int 
 
    pq.push(make_pair("ajay", 89));
    pq.push(make_pair("bjay", 29));
    pq.push(make_pair("cjay", 49));
    pq.push(make_pair("djay", 99));

    while(!pq.empty()){
        cout<<"top = "<<pq.top().first<<","<<pq.top().second<<endl;
        pq.pop();
    }

    return 0;
}