#include <bits/stdc++.h>
using namespace std;

int paritition(vector<int> &a,int s,int e){
    int pivot = a[e];
    int i = s - 1;

    for(int j = s; j < e; j++){
        if(a[j] < pivot){
            i++;
            swap(a[i],a[j]);
        }
    }

    swap(a[i+1],a[e]);

    return i + 1;
}

void quick_sort(vector<int> &a, int s, int e){
    if(s>=e){
        return;
    }

    int arr_partition = paritition(a,s,e);
    quick_sort(a,s,arr_partition-1);
    quick_sort(a,arr_partition+1,e);
}


int main(int argc,char** argv) {
    vector<int> arr = {5,4,3,2,1};

    quick_sort(arr,0,arr.size());

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void search(vector<int> &a,vector<int> v, int s, int e, int k){
    if(s>e){
        return;
    }    
    
    int mid = s + e / 2;
    if(k == v[mid]){
        a[0] = mid;
        return;
    }
    
    if(k < v[mid]){
        search(a,v,s,mid-1);
    }
    else{
        search(a,v,mid+1,e);
    }
}  

int binarySearch(vector<int> v, int x)
{
    // your code goes here
    vector<int> ans(1,-1);
    int n = v.size();
    search(ans,v,0,n,x);
    return ans[0];
}