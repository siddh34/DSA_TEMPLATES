#include<bits/stdc++.h>
using namespace std;

// Brute force method
void stockSpan(int prices[], int n, int span[]){
    stack<int> st;
    st.push(0);
    span[0] = 1;

    for(int i = 1; i <= n - 1; i++){
        int currprice = prices[i];
        while(!st.empty() && prices[st.top()] <= currprice){
            st.pop();
        }
        span[i] = st.empty() ? i + 1 : i - st.top();
        st.push(i);
    }
}

int main() {
    //Write your code here
    int prices[] = {100,80,70,60,75,85};
    int n = sizeof(prices)/sizeof(int);
    int span[100000] = {0};

    stockSpan(prices,n,span);

    for(int i = 0; i < n; i++){
        cout << span[i] << " ";
    }
    cout << endl;

    return 0;
}