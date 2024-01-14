#include<bits/stdc++.h>
#include "hashtable.h"
using namespace std;

int main() {
    //Write your code here
    Hashtable<int> h;
    h.insert("Mango", 100);
    h.insert("Apple", 120);
    h.insert("Guava", 130);
    h.insert("Banana", 140);
    h.insert("Pineapple", 150);
    h.insert("Kiwi", 160);
    h.insert("Orange", 170);
    h.insert("Papaya", 180);
    h.print();

    string fruit;
    cin >> fruit;

    int *price = h.search(fruit);
    if(price != NULL){
        cout << "Price of " << fruit << " is " << *price << endl;
        cout << "Price of " << fruit << " is " << h[fruit] << endl;
    }
    else{
        cout << fruit << " is not present" << endl;
    }

    return 0;
}