// 0044_check_anagram.cpp

// Problem: Valid Anagram
// URL: https://takeuforward.org/plus/dsa/problems/valid-anagram?category=beginner-problem&subcategory=basic-strings
// Goal: Given two strings s and t, return true if t is an anagram of s, and false otherwise.
//       An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once. 

#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string& s, string& t) {
    if(s.size()!=t.size()) return false;
    int cArr[256]={0};
    for(int i=0;i<s.size();i++) cArr[s[i]]++;
    for(int i=0;i<t.size();i++) {
        if(cArr[t[i]]<=0) return false;
        cArr[t[i]]--;
    }
    return true;
}

int main() {
    string s, goal;
    cin>>s>>goal;
    if(checkAnagram(s,goal)) cout<<"True";
    else cout<<"False";
    return 0;
}