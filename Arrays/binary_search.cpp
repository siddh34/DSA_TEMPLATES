#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int binary_search(int* arr,int n,int key){
    int start = 0;
    int end = n - 1;

    int mid = 0;
    while(start <= end){
        mid = (start + end) / 2;

        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
    }

    return -1;
}

int main(int argc,char** argv) {
    int arr[] = {5,6,1,34,54};

    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    cout << binary_search(arr,n,54) << endl;

    return 0;
}