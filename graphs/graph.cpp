#include<bits/stdc++.h>
#include "graph.h"
using namespace std;

int main() {
    //Write your code here
    Graph gr(6);
    gr.addEdge(0, 1);
    gr.addEdge(0, 4);
    gr.addEdge(2, 1);
    gr.addEdge(3, 4);
    gr.addEdge(4, 5);
    gr.addEdge(2, 3);
    gr.addEdge(3, 5);
    gr.addEdge(2, 5);
    // gr.printAdjList();
    // gr.BFS(1);
    // gr.DFS(1);
    gr.topological_sort();
    return 0;
}