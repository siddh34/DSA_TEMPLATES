#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }

    int ans = n*factorial(n-1);

    return ans;
}

int main(int argc,char** argv) {
    int number;
    cin >> number;

    cout << factorial(number) << endl;

    return 0;
}