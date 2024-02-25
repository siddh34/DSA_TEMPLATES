#include<bits/stdc++.h>
using namespace std;

// Function to find the number of ways to make the given amount using the given coins

int coinChange(vector<int>& coins, int amount) {
    //Write your code here
    vector<int> dp(amount + 1, 0);
    
    for(int i = 1; i <= amount; i++){
        dp[i] = INT_MAX;

        for(int c: coins){
            if(i - c >= 0){
                dp[i] = min(dp[i], dp[i - c] + 1);
            }
        }
    }

    return dp[amount] == INT_MAX ? -1 : dp[amount];
}

int main() {
    //Write your code here
    vector<int> arr = {1, 2, 5, 7, 10};

    int m = 9;

    cout << coinChange(arr, m) << endl;

    return 0;
}