#include <bits/stdc++.h>
using namespace std;

int **create_2D_array(int rows,int cols){
    int **arr = new int *[rows];

    for(int i=0;i<rows;i++){
        arr[i] = new int[cols];
    }

    // init the values
    int value = 0;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            arr[i][j] = value;
        }
    }

    return arr;
}

int main(int argc,char** argv) {

    int **arr = create_2D_array(3,3);

    for(int i=0; i<3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}