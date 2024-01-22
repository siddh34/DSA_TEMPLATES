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
};