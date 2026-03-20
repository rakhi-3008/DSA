#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    // priority_queue<int, vector<int>, greater<int>> pq;   //for smallest element on top use this 

    pq.push(5);
    pq.push(2);
    pq.push(19);
    
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}