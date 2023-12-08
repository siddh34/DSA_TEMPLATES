#include <bits/stdc++.h>
using namespace std;

int main(int argc,char** argv) {
    vector<vector<int>> arrays = {
        {0,2,3,4,5,6},
        {0,2,3,4,5,6},
        {0,2,3,4,5,6},
        {0,2,3,4,5,6},
    };

    for(int i = 0; i < arrays.size(); i++) {
        for(int j : arrays[i]) {
            cout << arrays[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}