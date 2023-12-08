#include <bits/stdc++.h>
using namespace std;

int max_subarray_sum(int arr[],int n){
    int max = 0;
    int cs = 0;

    for(int i=0; i<n; i++){
        cs = cs + arr[i];
        if(cs < 0){
            cs = 0;
        }
        
        max = cs > max ? cs : max;
    }

    return max;
}

int main(int argc,char** argv) {
    int arr[] = {1,-3,4,-2,1,5,12,-32,13};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "MAX SUM IN SUBARRAY : " << max_subarray_sum(arr,n) << endl;

    return 0;
}