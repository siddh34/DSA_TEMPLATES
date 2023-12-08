#include <bits/stdc++.h>
using namespace std;

int main(int argc,char** argv) {
    // Demo vector
    // vector<int> arr = {1,2,3,4,5};

    vector<int> arr(7,0);

    // pop back
    arr.pop_back();

    // push back
    arr.push_back(23);
    
    // size
    cout << arr.size() << endl;

    // capacity
    cout << arr.capacity() << endl;

    // print
    // for(int i = 0; i < arr.size(); i++){
    //     cout << arr[i] << endl;
    // }



    return 0;
}