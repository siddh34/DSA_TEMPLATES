#include<iostream>

class Queue{
    int *arr;
    int cs;
    int ms;
    int front;
    int rear;
public:
    Queue(int default_size = 5){
        ms = default_size;
        arr = new int[ms];
        cs = 0;
        front = 0;
        rear = ms - 1;
    }

    bool isFull(){
        return cs == ms;
    }

    bool isEmpty(){
        return cs == 0;
    }

    void push(int data){
        if(!isFull()){
            rear = (rear + 1) % ms;
            arr[rear] = data;
            cs++;
        }
    }

    void pop(){
        if(!isEmpty()){
            front = (front + 1) % ms;
            cs--;
        }
    }

    int top(){
        return arr[front];
    }
};