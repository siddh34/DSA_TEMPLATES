#include <bits/stdc++.h>
using namespace std;

void watch_video(int *views){
    *views = *views + 1;
}

int main(int argc,char** argv) {
    int views = 1;

    int *view_pointer = &views;

    watch_video(view_pointer);

    cout << views << endl;

    return 0;
}