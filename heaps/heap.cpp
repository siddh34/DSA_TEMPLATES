#include<bits/stdc++.h>
#include "heap.h"
using namespace std;

// creating a custom comparator

class Compare{
public:
    // This specific operator has to be over-loaded
    bool operator()(int a, int b){
        return a > b;
    }
};

int main() {
    //Write your code here
    int arr[] = {10, 15, 20, 13, 6, 90};
    int n = sizeof(arr) / sizeof(int);

    priority_queue<int> pq_max; // max heap
    priority_queue<int, vector<int>, greater<int>> pq_min; // min heap
    Heap hp(10);
    for (int i = 0; i < n; i++)
    {
        pq_max.push(arr[i]);
        pq_min.push(arr[i]);
        hp.push(arr[i]);
    }

    while (!pq_max.empty())
    {
        cout << pq_max.top() << " ";
        pq_max.pop();
    }

    cout << endl;

    while(!hp.empty()){
        cout << hp.top() << " ";
        hp.pop();
    }

    cout << endl;

    while (!pq_min.empty())
    {
        cout << pq_min.top() << " ";
        pq_min.pop();
    }
    return 0;
}