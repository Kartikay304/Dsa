// 0019_pascal_triangle3.cpp

// Problem: Pascal's Triangle III
// URL: https://takeuforward.org/plus/dsa/problems/pascals-triangle-iii?category=arrays&subcategory=faqs-medium
// Goal: Given an integer n, return the first n (1-Indexed) rows of Pascal's triangle.

#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow(int r) {
    vector<int> ans;
    ans.push_back(1);
    for(int i=1;i<r;i++) {
        ans.push_back(ans.back()*(r-i)/i);
    }
    return ans;
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;
    for(int i=1;i<=n;i++) {
        ans.push_back(generateRow(i));
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<vector<int>> ans = pascalTriangle(n);
    for(auto it: ans) {
        for(auto i : it) cout<<i<<" ";
        cout<<endl;
    }
}