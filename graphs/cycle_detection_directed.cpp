#include<iostream>
#include<list>
#include<vector>
using namespace std;

class Graph{
    int V;
    list<int>* l;
    bool undirected;
public:
    Graph(int V, bool undirected = true){
        this->V =V;
        l = new list<int>[V];
        this->undirected=undirected;
    }

    void addEdge(int u, int v){ //u-->v
        l[u].push_back(v);
        if(undirected){
            l[v].push_back(u);
        }
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

    bool isCycleHelper(int src, vector<bool> &visited, vector<bool> &recPath){
        visited[src]=true;
        recPath[src]=true;
        list<int> neighbors = l[src];
        for(int v : neighbors){
            if(!visited[v]){
                if(isCycleHelper(v, visited, recPath)){
                    return true;
                }
            }else{
                if(recPath[v]){
                    return true;
                }
            }
        }
        recPath[src]=false;
        return false;
    }

    bool isCycleDirected(){
        vector<bool> visited(V, false);
        vector<bool> recPath(V, false);
        for(int i=0; i<V; i++){
            if(!visited[i]){
                if(isCycleHelper(i, visited, recPath)){
                    return true;
                }
            }   
        }
        return false;
    }
};

int main(){
    //directed graph
    Graph graph(4, false);
    graph.addEdge(1, 0);
    graph.addEdge(0, 2);
    // graph.addEdge(3, 0);
    graph.addEdge(2, 3);

    cout<<graph.isCycleDirected()<<endl;

    return 0;
}