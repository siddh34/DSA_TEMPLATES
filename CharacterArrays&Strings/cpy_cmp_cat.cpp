#include <bits/stdc++.h>
using namespace std;

int main(int argc,char** argv) {
    char a[1000] = "Apple";
    char b[1000];

    // strcpy
    strcpy(b,a);

    cout << "After copying: " << b << endl;

    // strcmp

    cout << strcmp(b,a) << endl;

    // concat

    cout << strcat("Hello"," World!") << endl;

    return 0;
}