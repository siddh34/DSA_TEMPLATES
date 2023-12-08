#include <bits/stdc++.h>
using namespace std;

void print_size(int arr[]){
    cout << sizeof(arr) << endl;
}

int main(int argc,char** argv) {
    int arr[] = {0,1,2,3,4,5,6,7};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout << sizeof(arr) << endl;

    print_size(arr);

    return 0;
}