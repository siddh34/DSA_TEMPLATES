#include <bits/stdc++.h>
using namespace std;

int main(int argc,char** argv) {
    int marks[10] = {0};

    int n;
    cout << "Enter the number of students" << " ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> marks[i];
        marks[i] = marks[i]*2;
    }

    for(int i=0; i<n; i++){
        cout  << marks[i] << "  ";
    }

    cout << endl;

    return 0;
}