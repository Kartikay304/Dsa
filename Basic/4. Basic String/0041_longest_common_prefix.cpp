// 0041_longest_common_prefix.cpp

// Problem: Longest Common Prefix
// URL: https://takeuforward.org/plus/dsa/problems/longest-common-prefix?category=beginner-problem&subcategory=basic-strings
// Goal: Return the longest common prefix string amongst an array of strings.

#include <bits/stdc++.h>
using namespace std;

string longPrefix(vector<string>& strvec,int n) {
    sort(strvec.begin(),strvec.end());
    string strFirst=strvec[0];
    string strLast=strvec[n];
    int i=0;
    while(strFirst[i]==strLast[i]) i++;
    return strFirst.substr(0,i);
}

int main() {
    vector<string> strvec;
    int n;
    string str;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>str;
        strvec.push_back(str);
    }
    cout<<"Longest Common Prefix is:: "<<longPrefix(strvec,n-1);
    return 0;
}