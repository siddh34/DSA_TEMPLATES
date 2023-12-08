#include <bits/stdc++.h>
using namespace std;

int rotated_search(vector<int> &v,int key){
    int n = v.size();

    // logic
    int s = 0;
    int e = n - 1;

    while(s<=e){
        int mid = (s+e)/2;

        if(v[mid]==key) return mid;

        if(v[s]<=v[mid]){
            if(key>=v[s] && key<=v[mid]){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        else{
            if(key>=v[mid] && key<=v[e]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
    }

    return -1;
}

int main(int argc,char** argv) {
    vector<int> store = {4,5,6,7,0,1,2,3};
    int key;
    cin >> key;
    cout << rotated_search(store,key) << endl;
    return 0;
}