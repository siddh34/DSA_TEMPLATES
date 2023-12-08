#include <bits/stdc++.h>
using namespace std;

bool check_even(int a){
    if((a & (a - 1)) == 0){
        return true;
    }

    return false;
}

int main(int argc,char** argv) {
    int a;
    cin >> a;

    if(a&1){
        cout << "ODD" << endl;
    }
    else{
        cout << "EVEN" << endl;
    }
    return 0;
}