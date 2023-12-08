#include <bits/stdc++.h>
using namespace std;

int count(int n){
    int count = 0;

    while(n>0){
        int last_bits = (n&1);
        count += last_bits;
        n = n >> 1;
    }

    return count;
}

int main(int argc,char** argv) {
    int a;
    cin >> a;

    cout << count(a) << endl;

    return 0;
}