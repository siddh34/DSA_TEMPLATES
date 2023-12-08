#include<bits/stdc++.h>
using namespace std;

int grid_ways(int i,int j,int n,int m){
    if(i == n - 1 and j == m - 1) return 1;

    if(j >= m or i >= n) return 0;

    int ans = grid_ways(i+1,j,n,m) + grid_ways(i,j+1,n,m);
    return ans;
}

int main() {
    //Write your code here
    int n,m;
    cin >> n >> m;

    cout << grid_ways(0,0,n,m) << endl;
    return 0;
}