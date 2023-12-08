#include <bits/stdc++.h>
using namespace std;

pair<int, int> stair_case_search(int arr[][4],int n,int m,int key){
    if (key < arr[0][0] or key > arr[n - 1][m - 1]){
        return {-1,-1};
    }

    // staircase search
    int i = 0;
    int j = m - 1;

    while(i < n and j >= 0){
        if(arr[i][j] == key){
            return {i,j};
        }
        else if(arr[i][j] > key){
            j--;
        }
        else{
            i++;
        }
    }

    return {-1,-1};
}

int main(int argc,char** argv) {
    
    int arr[][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,39,49,59},
        {32,33,39,50}
    };

    pair<int,int> my_pair = stair_case_search(arr,4,4,35);

    cout << my_pair.first << " " << my_pair.second << endl;

    return 0;
}
