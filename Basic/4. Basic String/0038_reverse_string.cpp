// 0038_reverse_string.cpp

// Problem: Reverse a String II
// URL: https://takeuforward.org/plus/dsa/problems/reverse-a-string-ii?category=beginner-problem&subcategory=basic-strings
// Goal: Given a string, the task is to reverse it. The string is represented by an array of characters s.

#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& vec, int i, int j) {
    while(i<=j) {
        vec[i] = vec[i]^vec[j];
        vec[j] = vec[i]^vec[j];
        vec[i] = vec[i]^vec[j];
        i++; j--;
    }
}

int main() {
    int n;
    char num;
    cin>>n;
    vector <char> vec;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec.push_back(num);
    }
    reverseString(vec,0,n-1);
    cout<<"Reverse String is:: ";
    for(auto it: vec) cout<<it;
    return 0;
}