#include <bits/stdc++.h>
using namespace std;

bool sort_check(int arr[],int n){
    if(n == 1 || n == 0) return true;

    if(arr[0] < arr[1] && sort_check(arr + 1,n - 1)){
        return true;
    }
}

bool sort_check_two(int arr[],int i,int n){
    if(i == n - 1) return true;

    if(arr[i]<arr[i + 1] and sort_check_two(arr,i+1,n)){
        return true;
    }

    return false;
}

int main(int argc,char** argv) {
    int arr[] = {1,2,3,5,4,6,7,8};

    cout << sort_check(arr,8) << endl;

    return 0;
}