#include <bits/stdc++.h>
using namespace std;

void dec(int n){
    if (n == 0){
        return;
    }

    cout << n << endl;
    dec(n - 1);
}

void inc(int m,int n){
    if(m == n){
        return;
    }

    cout << m << endl;
    inc(m + 1,n);
}

int main(int argc,char** argv) {
    int num;
    cin >> num;

    cout << "Printing in decremental order..." << endl;

    dec(num);

    cout << "Printing in incremental order..." << endl;

    inc(num,num+5);

    return 0;
}