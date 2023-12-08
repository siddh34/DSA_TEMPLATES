#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    int pos = 0;
    int min_postion = 0;
    for(int i = 0; i < n; i++){
        pos = i;
        min_postion = pos;
        for(int j = i ; j < n; j++){
            if(arr[min_postion] > arr[j]){
                min_postion = j;
            }
        }

        swap(arr[pos],arr[min_postion]);
    }
}

int main(int argc,char** argv) {
    int arr[] = {5,4,2,1,3};

    int n = sizeof(arr)/sizeof(arr[0]);

    selection_sort(arr,n);

    for(auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}