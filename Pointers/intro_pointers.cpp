#include <bits/stdc++.h>
using namespace std;


int main(int argc,char** argv) {

    int x = 10;
    float y = 0.0f;

    cout << &x << endl;

    int * ptr = &x;

    int **ptr_of_ptr = &ptr;

    cout << ptr << endl;

    cout << ptr_of_ptr << endl;

    // dereferening

    // Note * can be used as dereferencing operator

    cout << *ptr << endl;
    cout << **ptr_of_ptr << endl;

    // Note that pointer can be initialized to 0 or NULL

    // example

    int *new_ptr = 0;
    int *ptr_for_ptr = NULL;

    cout << new_ptr << endl;
    cout << ptr_for_ptr << endl;

    return 0;
}