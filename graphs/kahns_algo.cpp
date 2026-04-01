#include<iostream>
#include<list>
#include<vector>
#include<queue>
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

     void calcIndegree(vector<int> &indegree){
        for(int u=0; u<V; u++){
            list<int> neighbors = l[u];
            for(int v : neighbors){     //u->v
                indegree[v]++;
            }
        }
     }

     void topoSort(){
        vector<int> indegree(V, 0);
        calcIndegree(indegree);
        queue<int> q;

        for(int i=0; i<V; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(q.size()>0){
            int curr = q.front();
            q.pop();
            cout<<curr<<" ";

            list<int> neighbors= l[curr];
            for(int v : neighbors){
                indegree[v]--;
                if(indegree[v]==0){
                    q.push(v);
                }
            }
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