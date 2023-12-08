#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool compare_for_ascending(int a, int b) {
    return a < b;
}

bool compare_for_descending(int a, int b) {
    return a > b;
}

int main(int argc,char** argv) {
    int arr[] = {2,76,124,5,35,134};

    int n = sizeof(arr)/sizeof(int);

    // sorting
    // sort(arr,arr + n,compare_for_ascending); // sorts ascending 
    // sort(arr,arr + n,compare_for_descending); // sorts descending
    reverse(arr,arr + n);

    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}