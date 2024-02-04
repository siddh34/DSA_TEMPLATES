#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<pair<int, int>> *adj;
public:
    Graph(int v){
        V = v;
        adj = new list<pair<int, int>>[V];
    }

    ~Graph()
    {
        delete[] adj;
    }

    void addEdge(int u, int v, int wt, bool undir = true){
        adj[u].push_back({v, wt});
        if(undir) adj[v].push_back({wt, u});
    }

    int dijkstra(int src, int dst){
        vector<int> dist(V, INT_MAX);
        set<pair<int, int>> s;

        dist[src] = 0;
        s.insert({0, src});

        while(!s.empty()){
            auto it = s.begin();
            int node = it->second;
            int nodeDist = it->first;
            s.erase(it);

            for(auto nbr_pair: adj[node]){
                int nbr = nbr_pair.second;
                int wt = nbr_pair.first;

                if(nodeDist + wt < dist[nbr]){
                    auto f = s.find({dist[nbr], nbr});
                    if(f != s.end()){
                        s.erase(f);
                    }
                    dist[nbr] = nodeDist + wt;
                    s.insert({dist[nbr], nbr});
                }
            }
        }

        for(int i = 0; i < V; i++){
            cout << "Node " << i << " is at distance " << dist[i] << endl;
        }

        return dist[dst];
    }
};

int main() {
    //Write your code here
    Graph gr(5);
    gr.addEdge(0, 1, 1);
    gr.addEdge(1, 2, 1);
    gr.addEdge(0, 2, 4);
    gr.addEdge(0, 3, 7);
    gr.addEdge(3, 2, 2);
    gr.addEdge(3, 4, 3);
    cout << gr.dijkstra(0, 4) << endl;
    return 0;
}