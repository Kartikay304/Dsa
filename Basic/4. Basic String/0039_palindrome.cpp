// 0039_palindrome.cpp

// Problem: Palindrome Check
// URL: https://takeuforward.org/plus/dsa/problems/palindrome-check?category=beginner-problem&subcategory=basic-strings
// Goal: You are given a string s. Return true if the string is palindrome, otherwise false.

#include <bits/stdc++.h>
using namespace std;

bool palindromeCheck(vector<char>& vec, int i, int j) {
    while(i<=j) {
        if(vec[i]!=vec[j]) return false;
        i++; j--;
    }
    return true;
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
    if(palindromeCheck(vec,0,n-1)) cout<<"True";
    else cout<<"False";
    return 0;
}