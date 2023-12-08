#include <bits/stdc++.h>
using namespace std;

string apply_len_encoding(string str){
    string ans = "";

    int n = str.size();

    for(int i = 0; i < n; i++){
        int count = 1;
        while(i < n - 1 and str[i+1] == str[i]){
            count++;
            i++;
        }

        ans += str[i];
        ans += to_string(count);

    }

    if(ans.size() > str.size()){
        return str;
    }

    return ans;
}

int main(int argc,char** argv) {
    string str = "aaabbeee";

    cout << "After encoding: "<< apply_len_encoding(str) << endl;

    return 0;
}