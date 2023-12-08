#include <bits/stdc++.h>
using namespace std;

int get_ith_bit(int n,int i){
    int mask = (1<<i);

    return (n & mask) > 0 ? 1 : 0;
}

void set_ith_bit(int &n,int i){
    int mask = (1<<i);

    n = (n | mask);
}

void clear_ith_bit(int &n,int i){
    int mask = ~(1<<i);

    n = (n & mask);
}

void update_ith_bit(int &n,int i,int v){
    clear_ith_bit(n,i);
    int mask = (v<<i);
    n = n | mask;
}

int clear_last_i_bits(int &n,int i){
    int mask = (-1 << i);
    n = n & mask;
}

void clear_bits_in_range(int &n,int i,int j){
    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    n = n & mask;
}

void replace_Bits(int& n,int i,int j,int m){
    clear_bits_in_range(n,i,j);
    int mask = (m << i);
    n = n | mask;
}

int main(int argc,char** argv) {
    int n = 5;
    int i;
    cin >> i;

    //cout << get_ith_bit(n,i) << endl;

    // set_ith_bit(n,i);

    return 0;
}