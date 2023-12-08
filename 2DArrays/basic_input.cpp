#include <bits/stdc++.h>
using namespace std;

void print_2D_array(int arr[][100], int n, int m){

    cout << "The array of zeros: " << endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(int argc,char** argv) {
    int arr[100][100];

    int n, m;
    cin >> n >> m;

    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            arr[i][j] = 0;
        }
    }

    print_2D_array(arr,n,m);

    return 0;
}
