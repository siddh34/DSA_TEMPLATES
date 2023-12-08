#include<bits/stdc++.h>
#include "list.h"
using namespace std;

int main() {
    //Write your code here
    List li;
    li.push_front(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_front(0);

    li.print_list();

    li.reverse();

    li.print_list();
    return 0;
}