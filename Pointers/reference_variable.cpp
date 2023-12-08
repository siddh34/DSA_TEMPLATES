#include <bits/stdc++.h>
using namespace std;

int main(int argc,char** argv) {
    int x = 19;
    int &y = x;

    y++;

    cout << x << endl;
    cout << y << endl;

    return 0;
}