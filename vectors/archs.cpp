#include <bits/stdc++.h>
#include "archs.h"
using namespace std;

int main(int argc,char** argv) {
    arc<int> v = arc<int>();

    v.push_back(23);
    v.push_back(23);
    v.push_back(25);
    v.push_back(26);
    v.push_back(27);
    v.pop_back();

    // cout << v.front() << endl;
    // cout << v.back() << endl;
    cout << v.capacity() << endl;
    cout << v.size() << endl;

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    return 0;
}