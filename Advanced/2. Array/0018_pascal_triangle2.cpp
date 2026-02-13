// 0018_pascal_triangle2.cpp

// Problem: Pascal's Triangle II
// URL: https://takeuforward.org/plus/dsa/problems/pascals-triangle-ii?category=arrays&subcategory=faqs-medium&tab=description
// Goal: Given an integer r, return all the values in the rth row (1-indexed) in Pascal's Triangle in correct order.

#include<bits/stdc++.h>
using namespace std;

vector<int> pascalRow(int n) {
    vector<int> ans;
    ans.push_back(1);
    for(int i=1;i<n;i++) {
        ans.push_back(ans.back()*(n-i)/i);
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> ans = pascalRow(n);
    for(auto it: ans) cout<<it<<" ";
}