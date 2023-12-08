#include <bits/stdc++.h>
using namespace std;

/*
{ {3, 0, 6, 5, 0, 8, 4, 0, 0},
{5, 2, 0, 0, 0, 0, 0, 0, 0},
{0, 8, 7, 0, 0, 0, 0, 3, 1},
{0, 0, 3, 0, 1, 0, 0, 8, 0},
{9, 0, 0, 8, 6, 3, 0, 0, 5},
{0, 5, 0, 0, 9, 0, 6, 0, 0},
{1, 3, 0, 0, 0, 0, 2, 5, 0},
{0, 0, 0, 0, 0, 0, 0, 7, 4},
{0, 0, 5, 2, 0, 6, 3, 0, 0} }
*/

bool isSafe(int mat[][9],int i,int j,int no){
    // check for row & col
    for(int k = 0; k < 9; k++){
        if(mat[k][j] == no || mat[i][k] == no){
            return false;
        }
    }

    // check subgrid
    int sx = (i / 3) * 3;
    int sy = (j / 3) * 3;

    for(int x = sx; x < sx + 3; x++){
        for(int y = sy; y < sy + 3; y++){
            if(mat[x][y] == no){
                return false;
            }
        }
    }

    return true;
}

bool sudoku_solver(int mat[][9],int i,int j,int n){
    // base case
    if(i == n){

        // print result
        for(int x = 0; x < 9; x++){
            for(int y = 0; y < 9; y++){
                cout << mat[x][y] << " ";
            }
            cout << endl;
        }

        return true;
    }

    // rec case
    if(j == n) return sudoku_solver(mat,i+1,0,n);

    // skip the prefilled cell
    if(mat[i][j] != 0) return sudoku_solver(mat,i,j+1,n);

    // cell to  be filled, try out every combination
    for(int no = 1; no <= n; no++){
        if(isSafe(mat,i,j,no)){
            mat[i][j] = no;
            bool solve_subproblem = sudoku_solver(mat, i, j + 1, n);
            if(solve_subproblem  == true) return true;
        }
    }

    // nothing works out
    mat[i][j] = 0;
    return false;
}

int main(){
    // Write your code here
    int matrix[9][9] = {{5, 3, 0, 0, 7, 0, 0, 0, 0},
                        {6, 0, 0, 1, 9, 5, 0, 0, 0},
                        {0, 9, 8, 0, 0, 0, 0, 6, 0},
                        {8, 0, 0, 0, 6, 0, 0, 0, 3},
                        {4, 0, 0, 8, 0, 3, 0, 0, 1},
                        {7, 0, 0, 0, 2, 0, 0, 0, 6},
                        {0, 6, 0, 0, 0, 0, 2, 8, 0},
                        {0, 0, 0, 4, 1, 9, 0, 0, 5},
                        {0, 0, 0, 0, 8, 0, 0, 7, 9}};

    if(!sudoku_solver(matrix, 0, 0, 9)){
        cout << "No solution found!" << endl;
    }

    return 0;
}