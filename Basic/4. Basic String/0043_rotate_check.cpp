// 0043_rotate_check.cpp

// Problem: Rotate String
// URL: https://takeuforward.org/plus/dsa/problems/rotate-string?category=beginner-problem&subcategory=basic-strings
// Goal: Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

#include <bits/stdc++.h>
using namespace std;

bool checkRotate(string& s, string& goal) {
    if(s.size()!=goal.size()) return false;
    string doubleS=s+s;
    return doubleS.find(goal) != string::npos;

}

int main() {
    string s, goal;
    cin>>s>>goal;
    if(checkRotate(s,goal)) cout<<"True";
    else cout<<"False";
    return 0;
}