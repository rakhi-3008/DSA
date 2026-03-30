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

    void DFShelper(int u, vector<bool> &visited){
        visited[u]=true;
        cout<<u<<" ";

        list<int> neighbors = l[u];
        for(int v : neighbors){
            if(!visited[v]){
                DFShelper(v, visited);
            }
        } 
    }

    void DFS(){     //O(V+E)
        vector<bool> visited(V, false);
        DFShelper(0, visited);
    }

};

int main(){
    Graph graph(7);
    //undirected graph
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 5);
    graph.addEdge(3, 4);
    graph.addEdge(4, 5);
    graph.addEdge(5, 6);

    vector<bool> visited(7, false);

    graph.DFS();

    return 0;
}