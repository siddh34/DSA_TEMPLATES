#include<bits/stdc++.h>
#include<queue>
using namespace std;

class Stack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int x){
        if(!q1.empty()){
            q1.push(x);
        }
        else{
            q2.push(x);
        }
    }

    void pop(){
        if(q1.empty()){
            while(!q2.empty()){
                int front = q2.front();
                q2.pop();
                if(q2.empty()){
                    break;
                }
                q1.push(front);
            }
        }
        else{
            while(!q1.empty()){
                int front = q1.front();
                q1.pop();   
                if(q1.empty()){
                    break;
                }
                q2.push(front);
            }
        }
    }

    int top(){
        if(q1.empty()){
            while(!q2.empty()){
                int frontele = q2.front();
                q2.pop();
                q1.push(frontele);
                if(q2.empty()){
                    return frontele;
                }
            }
        }
        else{
            while(!q1.empty()){
                int frontele = q1.front();
                q1.pop();
                q2.push(frontele);
                if(q1.empty()){
                    return frontele;
                }
            }
        }

        return -1;
    }

    bool empty(){
        return q1.empty() && q2.empty();
    }
};

int main() {
    //Write your code here
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}