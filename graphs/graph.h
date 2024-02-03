#include<iostream>
#include<list>
using namespace std;

class Graph{
private:
    list<int> *l;
    int V;
public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int i, int j, bool undir = true){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }

    void printAdjList(){
        for(int i=0; i<V; i++){
            cout<<i<<"->";
            for(int vertex: l[i]){
                cout<<vertex<<", ";
            }
            cout<<endl;
        }
    }

    void BFS(int source){
        queue<int> q;
        bool* visited = new bool[V]{0};
        q.push(source);
        visited[source] = true;

        while(!q.empty()){
            int f = q.front();
            cout << f << " ";
            q.pop();

            for(auto nbr: l[f]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }

        cout << endl;
    }

    void DFS(int source){
        static bool* visited = new bool[V]{0};
        cout << source << " ";
        visited[source] = true;

        for(auto nbr: l[source]){
            if(!visited[nbr]){
                DFS(nbr);
            }
        }
    }
};