#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
    return a < b;
}

void bubble_sort_rec(int arr[],int size,int i){
    if(size==1 || size==0) return;

    if(i == size - 1){
        bubble_sort_rec(arr,size-1,0);
        return;
    }

    if(arr[i]>arr[i + 1]){
        swap(arr[i],arr[i+1]);
    }

    bubble_sort_rec(arr,size,i + 1);
}

int main(int argc,char** argv) {
    int arr[] = {8,1,2,3,4,5,6};

    int size = sizeof(arr)/sizeof(arr[0]);

    bubble_sort_rec(arr,size,0);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}