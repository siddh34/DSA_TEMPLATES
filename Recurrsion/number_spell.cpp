#include <bits/stdc++.h>
using namespace std;

string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void print_spell(int n){
    if(n == 0) return;

    int last_digit = n%10;
    print_spell(n/10);
    cout << spell[last_digit] << " ";
}

int main(int argc,char** argv) {
    print_spell(13);
    return 0;
}
