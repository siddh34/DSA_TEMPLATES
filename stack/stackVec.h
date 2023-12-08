#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class Stack{
private:
    vector<T> v;
public:
    void push(T data){
        v.push_back(data);
    }

    void pop(){
        v.pop_back();
    }

    T top(){
        return v[v.size() - 1];
    }

    bool isEmpty(){
        return v.size() == 0;
    }
};