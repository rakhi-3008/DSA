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

    void BFShelper(int i, vector<bool>& visited){     //O(V+E)
        queue<int> q;
        q.push(i);
        visited[i]=true;

        while(q.size()>0){
            int u = q.front();
            q.pop();
            cout<<u<<" ";

            list<int> neighbors = l[u];
            for(int v : neighbors){
                if(!visited[v]){
                    visited[v]=true;
                    q.push(v);
                }
            }
        }
        cout<<endl;
    }

    void BFS(){
        vector<bool> visited(V, false);
        for(int i=0; i<V; i++){
            if(!visited[i]){
                BFShelper(i, visited);
            }
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
        vector<bool> visited(7, false);
        for(int i=0; i<V; i++){
            if(!visited[i]){
                DFShelper(i, visited);
            }
        }
        cout<<endl;
    }
};

int main(){
    Graph graph(10);
    //undirected graph
    graph.addEdge(0, 2);
    graph.addEdge(2, 5);
    graph.addEdge(1, 6);
    graph.addEdge(6, 4);
    graph.addEdge(4, 9);
    graph.addEdge(3, 4);
    graph.addEdge(3, 8);
    graph.addEdge(3, 7);

    graph.DFS();
    graph.BFS();

    return 0;
}