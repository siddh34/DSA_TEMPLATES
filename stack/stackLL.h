#include<iostream>
using namespace std;

template<typename T>
class Stack;

template<typename T>
class Node{
    T data;
    Node<T> *next;

    Node(T d){
        data = d;
        next = NULL;
    }

    friend class Stack<T>;
};

template<typename T>
class Stack{
private:
    Node<T> *head;
public:
    Stack(){
        head = NULL;
    }

    void push(T data){
        Node<T> *newNode = new Node<T>(data);
        newNode->next = head;
        head = newNode;
    }

    T top(){
        if(head == NULL){
            cout << "Stack is empty" << endl;
            return 0;
        }
        return head->data;
    }

    void pop(){
        if(head == NULL){
            cout << "Stack is empty" << endl;
            return;
        }
        Node<T> *temp = head;
        head = head->next;
        delete temp;
    }

    bool isEmpty(){
        return head == NULL;
    }
};