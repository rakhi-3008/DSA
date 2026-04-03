#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<pair<int, int>>* l;
    bool undirected;
public:
    Graph(int V, bool undirected = true){
        this->V =V;
        l = new list<pair<int, int>>[V];
        this->undirected=undirected;
    }

    void addEdge(int u, int v, int wt){ //u-->v
        l[u].push_back(make_pair(v, wt));
        if(undirected){
            l[v].push_back(make_pair(u, wt));
        }
    }

    int prims(int src){
        priority_queue<pair<int , int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;    //(wt, v) minheap

        vector<bool> mstSet(V, false);
        int minCost=0;
        pq.push(make_pair(0, src));

        while(pq.size()>0){
            int u = pq.top().second;
            int wt = pq.top().first;
            pq.pop();

            if(!mstSet[u]){
                mstSet[u]=true;
                minCost+=wt;

                list<pair<int, int>> neighbors = l[u];
                for(pair<int,int> n : neighbors){
                    pq.push(make_pair(n.second, n.first));  //(wt, v)
                }
            }
        }
        return minCost;
    }
};

int main(){
    Graph graph(4);
    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 2, 15);
    graph.addEdge(0, 3, 30);

    graph.addEdge(1, 3, 40);

    graph.addEdge(2, 3, 50);

    cout<<graph.prims(0)<<endl;

    return 0;
}