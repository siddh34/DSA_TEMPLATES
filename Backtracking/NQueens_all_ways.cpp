#include<bits/stdc++.h>
using namespace std;

void print_board(int n,int board[][20]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}

bool can_place(int n,int board[][20],int x, int y){
    // check board

    // Column
    for(int k = 0; k < x; k++){
        if(board[k][y]==1){
            return false;
        }
    }

    // left diagonal
    int i = x;
    int j = y;
    while(i >= 0 && j >= 0){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j--;
    }

    // right diagonal
    i = x;
    j = y;
    while(i >= 0 && j < n){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j++;
    }

    return true;
}

int solve_NQueens(int n,int board[][20],int i){
    if(i == n){
        print_board(n,board);
        //return true;
        return 1;
    }

    // rec case
    int ways = 0;

    for(int j = 0; j < n; j++){
        // whether the current i, j are safe or not
        if(can_place(n,board,i,j)){
            board[i][j] = 1;
            // if(solve_NQueens(n,board,i+1)){
            //     return true;
            // }

            ways += solve_NQueens(n,board,i+1);

            // backtrack
            board[i][j] = 0;
        }
    }

    return ways;
}

int main() { 
    //Write your code here
    int board[20][20] = {0};
    int n;
    cin >> n;

    cout << solve_NQueens(n,board,0);

    cout << " ways it can be solved" << endl;

    return 0;
}