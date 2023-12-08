#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int prefix_subarray_sum(int arr[],int n){
    int max = 0;

    int prefix[n] = {0};
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        prefix[i] = sum;
    }

    int sub_array_sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            sub_array_sum = i > 0 ? prefix[j] - prefix[i - 1]: prefix[j];
            max = max > sub_array_sum ? max : sub_array_sum; 
        }
    }

    return max;
}

int main(int argc,char** argv) {
    int arr[] = {-1,-1,-2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Largest sum in subarray : " << prefix_subarray_sum(arr,n) << endl;

    return 0;
}