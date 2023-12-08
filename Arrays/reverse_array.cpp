#include <bits/stdc++.h>
using namespace std;

void reverse(int* arr, int n){
    int start = 0;
    int end = n - 1;


    while(start < end){
        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[end] ^ arr[start];
        arr[start] = arr[start] ^ arr[end];
        start++;
        end--;
    }
}

int main(int argc,char** argv) {
    int arr[] = {0,1,2,3,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);

    reverse(arr,n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}