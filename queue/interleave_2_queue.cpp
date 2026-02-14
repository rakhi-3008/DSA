#include<iostream>
#include<queue>
using namespace std;

void interLeave(queue<int> &org){
    int n=org.size();
    queue<int> first;

    for(int i=1; i<=n/2; i++){
        first.push(org.front());
        org.pop();
    }

    while(!first.empty()){
        org.push(first.front());
        first.pop();

        org.push(org.front());
        org.pop();
    }
}

int main(){
        queue<int> q;

        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.push(5);
        q.push(6);
        q.push(7);
        q.push(8);
        q.push(9);
        q.push(10);

        interLeave(q);

        for(int i=0; i<10; i++){
            cout<<q.front()<<endl;
            q.pop();
        }

    return 0;
}