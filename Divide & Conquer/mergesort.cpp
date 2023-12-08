#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int s,int e ){
    vector<int> temp;
    int i = s;
    int m = (s+e)/2;
    int j = m + 1;

    while(i<=m && j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=m){
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=e){
        temp.push_back(arr[j]);
        j++;
    }

    // copy back elements
    int k = 0;
    for(int idx=s; idx<=e; idx++){
        arr[idx] = temp[k];
        k++;
    }
}

void mergesort(vector<int> &arr,int s, int e){
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(int argc,char** argv) {
    vector<int> arr = {4,1,2,8,10,3,5};
    int n = arr.size();
    mergesort(arr,0,n);

    // print array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}