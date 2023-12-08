#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(int argc,char** argv) {
    string str;

    // used for input
    // getline(cin,str); 

    int n = 3;
    vector<string> lines;
    while(n--){
        getline(cin,str);
        lines.push_back(str);
    }

    for(auto i : lines){
        cout << i << endl;
    }


    return 0;
}