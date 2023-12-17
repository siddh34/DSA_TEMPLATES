#include<vector>
using namespace std;

bool compare(int a, int b, bool isMinHeap){
    if(isMinHeap){
        return a < b;
    }
    return a > b;
}

class Heap{
private:
    vector<int> v;
    bool isMinHeap;

    friend bool compare(int a, int b, bool isMinHeap);

    void heapify(int i){
        int left = 2 * i;
        int right = 2 * i + 1;

        int min_idx = i;

        if (left < v.size() and compare(v[left], v[i], this->isMinHeap))
        {
            min_idx = left;
        }

        if (right < v.size() and compare(v[right], v[min_idx], this->isMinHeap))
        {
            min_idx = right;
        }

        if(min_idx != i){
            swap(v[i], v[min_idx]);
            heapify(min_idx);
        }
    }

public:

    Heap(int default_size = 10, bool isMinHeap = true){
        this->isMinHeap = isMinHeap;
        v.reserve(default_size + 1);
        v.push_back(-1);
    }

    void push(int data){
        v.push_back(data);

        int idx =v.size() - 1;
        int parent = idx / 2;

        while (idx > 1 and compare(v[idx], v[parent], this->isMinHeap))
        {
            swap(v[idx], v[parent]);
            idx = parent;
            parent = parent / 2;
        }
    }

    int top(){
        return v[1];
    }

    void pop(){
        int idx = v.size() - 1;
        swap(v[1], v[idx]);
        v.pop_back();
        heapify(1);
    }
};

