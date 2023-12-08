#include <bits/stdc++.h>
using namespace std;

// In given sentence count the number of alphabetes, number & spaces

int main(int argc,char** argv) {

    // store and then count
    // read one by one and then count

    char ch;

    ch = cin.get();

    // count
    int alpha = 0;
    int space = 0;
    int digit = 0;

    while(ch!='\n'){
        if(ch>='0' && ch<='9'){
            digit++;
        }
        else if(ch>='a' && ch<='z' || ch>='A' && ch>='Z'){
            alpha++;
        }
        else if(ch==' ' || ch=='\t'){
            space++;
        }

        ch = cin.get();
    }

    cout << "Number of Alphabets: " << alpha << endl;
    cout << "Number of digits: " << digit << endl;
    cout << "Number of space: " << space << endl;

    return 0;
}