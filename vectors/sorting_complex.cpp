#include <bits/stdc++.h>
using namespace std;

int cal_total(vector<int> marks){
    int total = 0;
    total = accumulate(marks.begin(), marks.end(),total);

    // cout << total << endl;

    return total;
}

bool compare(pair<string,vector<int>> m1,pair<string,vector<int>> m2){
    vector<int> marks1 = m1.second;
    vector<int> marks2 = m2.second;

    return  cal_total(marks1) > cal_total(marks2);
}

int main(int argc,char** argv) {

    vector<pair<string,vector<int>>> student_list = {
        {"Rohan",{10,20,30}},
        {"Soham",{11,21,31}},
        {"Sid",{9,22,38}},
    };

    sort(student_list.begin(), student_list.end(),compare);

    for(auto i : student_list){
        cout << i.first << endl;
        cout << "Marks: ";
        // printing vector
        for(auto j: i.second){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}