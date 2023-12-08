#include <bits/stdc++.h>
using namespace std;

// pass by reference

void apply_tax(int &income){
    float tax = 0.1;
    income = income - income*tax;
}

int main(int argc,char** argv) {
    int income = 100;

    apply_tax(income);

    cout << income << endl;

    return 0;
}