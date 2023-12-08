#include <bits/stdc++.h>
using namespace std;

int power(int a,int n){
    if(n == 0) return 1;

    return a * power(a,n - 1);
}

int optimized_power(int a,int n){
    if(n == 0) return 1;

    int sub_prob = optimized_power(a,n/2);
    if(n & 1) {
        return a * sub_prob * sub_prob;
    }

    return sub_prob*sub_prob;
}

int main(int argc,char** argv) {
    int a;
    int n;
    cin >> a >> n;

    cout << power(a,n) << endl;

    cout << optimized_power(a,n) << endl;
    return 0;
}