#include <bits/stdc++.h>
using namespace std;

int last_occurence(int arr[],int n,int key){
    if(n == 0) return -1;

    int subidx = last_occurence(arr+1,n-1,key);

    if(subidx == -1){
        if(arr[0] == key){
            return 0;
        } 
        else{
            return -1;
        }
    }

    return subidx + 1;
}

int main(int argc,char** argv) {
    
    return 0;
}