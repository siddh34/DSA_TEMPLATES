#include <bits/stdc++.h>
using namespace std;

int first_occurence(int arr[],int n,int key){
    if(n == 0){
        return -1;
    }

    if(arr[0] == key){
        return 0;
    }

    int subidx = first_occurence(arr+1,n-1,key);

    if(subidx != -1){
        return subidx + 1;
    }

    return -1;
}

int main(int argc,char** argv) {
    int arr[] = {4,1,2,7};
    int n = 4;


    cout << first_occurence(arr,n,7) << endl;

    return 0;
}