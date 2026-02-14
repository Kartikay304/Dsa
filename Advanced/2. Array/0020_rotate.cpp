// 0020_rotate90.cpp

// Problem: Rotate matrix by 90 degrees
// URL: https://takeuforward.org/plus/dsa/problems/rotate-matrix-by-90-degrees?category=arrays&subcategory=faqs-medium
// Goal: Given an N * N 2D integer matrix, rotate the matrix by 90 degrees clockwise.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate90(vector<vector<int>> matrix, int n) {
    vector<vector<int>> ans(n,vector<int> (n));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            ans[j][n-1-i] = matrix[i][j];
        }
    }
    return ans;
}


int main() {
    vector<vector<int>> matrix;
    vector<int> vec;
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>num;
            vec.push_back(num);
        }
        matrix.push_back(vec);
        vec.clear();
    }
    vector<vector<int>> ans = rotate90(matrix,n);
    for(auto it : ans) {
        for(auto ele : it) cout<<ele<<" ";
        cout<<endl;
    }
}