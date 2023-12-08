#include <bits/stdc++.h>
using namespace std;

bool compare(string a,string b){
    if(a.length() == b.length()) return a < b;

    return a.length() < b.length();
}

void find_sub(char* inp,char* out,int i,int j,vector<string> &storage){
    if(inp[i] == '\0'){
        out[j] = '\0';
        if(out[0] == '0'){
            // cout << "NULL";
            storage.push_back("NULL");
        }
        // cout << out << endl;
        storage.push_back(out);
        return;
    }

    out[j] = inp[i];
    find_sub(inp,out,i+1,j+1,storage);
    find_sub(inp,out,i+1,j,storage);
}

int main(int argc,char** argv) {
    char inp[100];
    char out[100];
    cin >> inp;

    vector<string> storage;
    find_sub(inp,out,0,0,storage);
    sort(storage.begin(),storage.end(),compare);

    for(string s: storage){
        cout << s << endl;
    }

    return 0;
}