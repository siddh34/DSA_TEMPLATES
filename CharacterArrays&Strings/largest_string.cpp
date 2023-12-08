#include <bits/stdc++.h>
using namespace std;

int main(int argc,char** argv){
    int n;
    cout << "Enter number of Strings: ";
    cin >> n;

    cin.get();

    char sentence[1000];
    char greater_sentence[1000];
    int largest_len = 0;
    int len = 0;
    while(n--){
        cin.getline(sentence,1000);
        len = strlen(sentence);
        if(len > largest_len){
            strcpy(greater_sentence,sentence);
            largest_len = len;
        }
    }

    cout << "The Largest Sentence: " << greater_sentence << endl;
    cout << "It's length: " << len << endl;

    return 0;
}