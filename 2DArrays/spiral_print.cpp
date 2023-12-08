 #include <bits/stdc++.h>
using namespace std;

void spiral_print(int arr[][10], int n, int m){

    int start_row = 0;
    int end_row = n - 1;
    int start_col = 0;
    int end_col = m - 1;

    while(start_row <= end_row and start_col <= end_col){
        // start row
        for(int col = start_col; col <= end_col; col++){        
            cout << arr[start_row][col] << "\t";
        }
        cout << endl;

        // go downwards
        for(int row = start_row + 1; row <= end_row; row++){       
            cout << arr[row][end_col] << "\t";
        }
        cout << endl;

        // go left
        for(int col = end_col - 1; col >= start_col; col--){
            //? Corner case?
            if(start_row == end_row){
                break;
            }
            cout << arr[end_row][col] << "\t";
        }
        cout << endl;

        // go upwards
        for(int row = end_row - 1; row >= start_row + 1; row--){
            //? Corner case?
            if(start_col == end_col){
                break;
            }
            cout << arr[row][start_col] << "\t";
        }
        cout << endl;

        // update variable for inner spiral
        start_row++;
        end_row--;
        start_col++;
        end_col--;
    }

}

int main(int argc,char** argv) {
    int arr[][10] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    spiral_print(arr,4,4);

    return 0;
}