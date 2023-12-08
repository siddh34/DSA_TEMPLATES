#include <bits/stdc++.h>
using namespace std;

void print_arr(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fill_array(int* arr, int i, int n, int val){
    if(i == n){
        print_arr(arr,n);
        return;
    }

    arr[i] = val;
    fill_array(arr, i+1, n, val+1);

    // backtracking
    arr[i] = -arr[i];
}

int main(int argc,char** argv) {
    int arr[10] = {0};
    int n;
    cin >> n;

    fill_array(arr,0,10,n);
    print_arr(arr,10);


    return 0;
}