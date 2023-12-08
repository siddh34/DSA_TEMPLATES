#include <bits/stdc++.h>
using namespace std;

int fast_expo(int a,int n){
    int ans = 1;

    while(n>0){
        int last_bit = (n&1);
        if(last_bit){
            ans = ans * a;
        }
        a = a * a;
        n = n >> 1;
    }

    return ans;
}

int main(int argc,char** argv) {
    int a,n;
    cin >> a >> n;

    cout << fast_expo(a,n) << endl;

    return 0;
}