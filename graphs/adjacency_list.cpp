#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    string name;
    list<string> neighbours;
    
    Node(string name){
        this->name = name;
    }

    void addNeighbour(string name){
        neighbours.push_back(name);
    }
};

class Graph{
    unordered_map<string, Node*> map;
public:
    Graph(vector<string> cities){
        for(auto city: cities){
            map[city] = new Node(city);
        }
    }

    void addEdge(string x, string y, bool undir = true){
        map[x]->addNeighbour(y);

        if(undir){
            map[y]->addNeighbour(x);
        }
    }

    void printAdjList(){
        for(auto city_pair: map){
            auto city = city_pair.first;
            Node* node = city_pair.second;

            for(auto neighbour: node->neighbours){
                cout << city << " -> " << neighbour << endl;
            }
        }
    }
};

int main() {
    //Write your code here
    vector<string> cities = {"Delhi", "London", "Paris", "New York"};
    Graph g(cities);
    g.addEdge("Delhi", "London");
    g.addEdge("New York", "London");
    g.addEdge("Paris", "London");
    g.addEdge("Delhi", "Paris");
    g.printAdjList();
    return 0;
}