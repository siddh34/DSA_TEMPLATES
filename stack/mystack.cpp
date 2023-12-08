#include<bits/stdc++.h>
#include "stackVec.h"
using namespace std;

void insertAtBottom(Stack<char> &st,char data){
    if(st.isEmpty()){
        st.push(data);
        return;
    }

    char temp = st.top();
    st.pop();

    insertAtBottom(st,data);
    st.push(temp);
}

void reverse(Stack<char> &st){
    if(st.isEmpty()){
        return;
    }

    char temp = st.top();
    st.pop();

    reverse(st);
    insertAtBottom(st,temp);
}

int main() {
    //Write your code here
    Stack<char> st;
    string s;

    cin >> s;

    for(int i = 0; i < s.length(); i++){
        st.push(s[i]);
    }

    while (!st.isEmpty())
    {
        cout << st.top();
        st.pop();
    }

    // insertAtBottom(st,'a');
    reverse(st);

    while (!st.isEmpty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}