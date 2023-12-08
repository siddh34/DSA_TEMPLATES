#include <bits/stdc++.h>
using namespace std;

int main(int argc,char** argv) {
    vector<int> vi = {10,20,30,40,50,60};

    int key = 10;

    vector<int>::iterator it = find(vi.begin(),vi.end(),key);

    cout << it - vi.begin() << endl;

    return 0;
}