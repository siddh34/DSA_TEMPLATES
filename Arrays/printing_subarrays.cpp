#include <bits/stdc++.h>
using namespace std;

void print_subarrays(int arr[],int n){
    // hw implimentation
    int sum = 0;
    int max = 0;

    // print subarrays
    for(int i=0; i<n; i++){
        for(int  j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout << arr[k] << ",";
                sum += arr[k];
            }
            cout << endl;
            cout << "Sum of this (above) subarray : ";
            cout << sum << endl;
            max < sum ? max = sum : max = max;
            sum = 0;
        }
    }

    cout << "Max sum of sub array : "<< max << endl;
}

int main(int argc,char** argv) {
    int arr[] = {0,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    print_subarrays(arr,n);

    return 0;
}