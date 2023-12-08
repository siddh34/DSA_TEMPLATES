#include <bits/stdc++.h>
using namespace std;

void print_all_pairs(int arr[],int n){

    // print all pairs
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            cout << arr[i] << "," << arr[j] << endl;
        }
    }
}

int main(int argc,char** argv) {

    int arr[] = {0,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    print_all_pairs(arr,n);

    return 0;
}