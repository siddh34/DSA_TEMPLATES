#include<bits/stdc++.h>
#include "queue.h"
using namespace std;

int main() {
    //Write your code here
    Queue myqueue(12);
    
    myqueue.push(1);
    myqueue.push(2);
    myqueue.push(3);

    while(!myqueue.isEmpty()){
        cout << myqueue.top() << " ";
        myqueue.pop();
    }

    return 0;
}
