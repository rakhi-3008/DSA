#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int>* l;
public:
    Graph(int V){
        this->V =V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v){ //u->v
        l[u].push_back(v);
        l[v].push_back(u);
    }
    
    void print(){
        for(int u=0; u<V; u++){
            list<int> neighbors = l[u];
            cout<<u<<": ";
            
            for(int v: neighbors){
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }

    bool isBipartite(){
        queue<int> q;
        vector<bool> visited(V, false);
        vector<int> color(V, -1);

        q.push(0);
        color[0]=0;
        visited[0]=true;

        while(q.size()>0){
            int curr = q.front();
            q.pop();

            list<int> neighbors = l[curr];
            for(int v : neighbors){
                if(!visited[v]){
                    visited[v]=true;
                    color[v]= !color[curr];
                    q.push(v);
                }else{
                    if(color[v]==color[curr]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

int main(){
    // Graph graph(4);
    // undirected, bipartite  graph
    // graph.addEdge(0, 1);
    // graph.addEdge(1, 3);
    // graph.addEdge(3, 2);
    // graph.addEdge(2, 0);

    //undirected, not bipartite  graph
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(1, 3);
    graph.addEdge(3, 4);
    graph.addEdge(4, 2);
    graph.addEdge(2, 0);

    cout<<graph.isBipartite()<<endl;

    return 0;
}