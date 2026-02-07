// 0045_sort_by_freq.cpp

// Problem: Sort Characters by Frequency
// URL: https://takeuforward.org/plus/dsa/problems/sort-characters-by-frequency?category=beginner-problem&subcategory=basic-strings
// Goal: You are given a string s. Return the array of unique characters, sorted by highest to lowest occurring characters. If two or more characters have same frequency then arrange them in alphabetic order. 

#include <bits/stdc++.h>
using namespace std;

static bool comparator(pair<char,int> p1, pair<char,int> p2) {
    if(p1.second>p2.second) return true;
    if(p1.second==p2.second && p1.first<p2.first) true;
    return false;
}

void sortFreq(string& str, int n) {
    pair<char,int> pairArr[26];
    for(int i=0;i<26;i++) pairArr[i] = {'a'+i,0};
    for(auto it : str) pairArr[it-97].second++;
    sort(pairArr,pairArr+26,comparator);
    for(auto it : pairArr) if(it.second!=0) cout<<it.first<<" ";
}

int main() {
    string str;
    cin>>str;
    sortFreq(str,str.size());
    return 0;
}