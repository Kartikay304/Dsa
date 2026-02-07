// 0042_isomorphic_string.cpp

// Problem: Isomorphic String
// URL: https://takeuforward.org/plus/dsa/problems/isomorphic-string?category=beginner-problem&subcategory=basic-strings
// Goal: Given two strings s and t, determine if they are isomorphic. Two strings s and t are isomorphic if the characters in s can be replaced to get t.

#include <bits/stdc++.h>
using namespace std;

bool checkIsomorphic(string& s, string& t) {
    if(s.size()!=t.size()) return false;
    int sMap[256]={0}, tMap[256]={0};
    for(int i=0;i<s.size();i++) {
        if( (sMap[s[i]]!=0 || tMap[t[i]]!=0) && (sMap[s[i]]!=t[i]+1 || tMap[t[i]]!=s[i]+1)) return false;
        sMap[s[i]] = t[i] + 1;
        tMap[t[i]] = s[i] + 1;
    }
    return true;
}

int main() {
    string s, t;
    cin>>s>>t;
    if(checkIsomorphic(s,t)) cout<<"True";
    else cout<<"False";
    return 0;
}