#include<bits/stdc++.h>
#include "trie.h"
using namespace std;

int main() {
    //Write your code here
    string words[] = {"apple", "ape", "no", "news", "not", "never"};

    Trie t;
    
    for(auto word: words){
        t.insert(word);
    }

    string searchWord;
    cin >> searchWord;

    if(t.search(searchWord)){
        cout << "Present" << endl;
    }else{
        cout << "Absent" << endl;
    }

    return 0;
}