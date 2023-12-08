#include <bits/stdc++.h>
using namespace std;

int fibonacii(int n){
    if(n == 0 or n == 1){
        return n;
    }

    int f1 = fibonacii(n-1);
    int f2 = fibonacii(n-2);

    return f1 + f2;
}

int main(int argc,char** argv) {
    
    return 0;
}