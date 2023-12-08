#include <bits/stdc++.h>
using namespace std;


int main(int argc,char** argv) {
    
    char route[1000];

    cout << "Enter capital symbols for directions: ";

    cin.getline(route,1000);

    int x = 0;
    int y = 0;
    for(int i=0; route[i] != '\0'; i++) {
        switch (route[i]) {
        case 'N':
            y++;
            break;
        case 'W':
            x--;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        default:
            cout << "Error: Character is not a direction" << endl;
            break;
        }
    }

    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;

    cout << "Minimum Distance: ";

    if(x >= 0 and y >= 0){
        while(y--){
            cout << "N";
        }

        while(x--){
            cout << "E";
        }
    }
    else if(x >= 0 and y <= 0){
        while(y++){
            cout << "S";
        }
        
        while(x--){
            cout << "E";
        }
    }
    else if(x <= 0 and y >= 0){
        while(y--){
            cout << "N";
        }
        
        while(x++){
            cout << "W";
        }
    }
    else if(x <= 0 and y <= 0){
        while(y++){
            cout << "S";
        }
        
        while(x++){
            cout << "W";
        }
    }

    return 0;
}