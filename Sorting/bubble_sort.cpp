#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<=n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return;
}

int main(int argc,char** argv) {
    int arr[] = {1,3,4,2,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}