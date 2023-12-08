#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i = 1; i < n; i++){
        int curr = arr[i];

        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}

int main(int argc,char** argv) {
    int arr[] = {5,2,1,6,7,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertion_sort(arr,n);

    for(int element : arr) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}