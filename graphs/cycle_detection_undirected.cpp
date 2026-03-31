#include<iostream>
#include<list>
#include<vector>
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

    bool isCycleHelper(int src, vector<bool> &visited, int par){
        visited[src]=true;
        list<int> neighbors = l[src];

        for(int v : neighbors){
            if(!visited[v]){    //non-visited
                if(isCycleHelper(v, visited, src)){
                    return true;
                }
            }else{  //visited 
                if(v!=par){ //cycle condition 
                    return true;   
                }
            }
        }
        return false;
    }

    bool isCycleUndirected(){
        vector<bool> visited(V, false);
        return isCycleHelper(0, visited, -1);
    }
};

int main(){
    Graph graph(5);
    //undirected graph
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(0, 3);
    graph.addEdge(0, 2);
    graph.addEdge(2, 4);

    cout<<graph.isCycleUndirected()<<endl;

    return 0;
}