#include <bits/stdc++.h>
using namespace std;

int main(int argc,char** argv) {

    char sentence[1000];

    char temp = cin.get();

    // You can change temp != "someCharacter" so that it will stop at someCharacter
    int len = 0;
    while(temp != '\n'){
        sentence[len++] = temp;
        temp = cin.get();
    }

    cout << len << endl;
    cout << "Sentence: " << sentence << endl;
    
    return 0;
}