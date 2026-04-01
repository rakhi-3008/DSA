#include<iostream>
#include<list>
#include<vector>
#include<stack>
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

    void pathHelper(int src, int dest, vector<bool> &visited, string &path){
        if(src==dest){
            cout<<path<<dest<<endl;
            return;
        }

        visited[src]=true;
        path+=to_string(src);
        list<int> neighbors = l[src];

        for(int v : neighbors){
            if(!visited[v]){
                pathHelper(v, dest, visited, path);   
            }
        }
        path=path.substr(0, path.size()-1);
        visited[src]=false;
    }

    void topoHelper(int src, vector<bool> &visited, stack<int> &s){
        visited[src]=true;

        list<int> neighbors = l[src];
        for(int v: neighbors){
            if(!visited[v]){
                topoHelper(v, visited, s);
            }
        }
        s.push(src);
    }

    void topoSort(){
        stack<int> s;
        vector<bool> visited(V, false);
        for(int i=0; i<V; i++){
            topoHelper(i, visited, s);
        }

        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }
};

int main(){
    //DAG
    Graph graph(6, false);
    graph.addEdge(3, 1);
    graph.addEdge(4, 1);
    graph.addEdge(4, 0);
    graph.addEdge(5, 0);
    graph.addEdge(5, 2);
    graph.addEdge(2, 3);

    graph.topoSort();

    return 0;
}