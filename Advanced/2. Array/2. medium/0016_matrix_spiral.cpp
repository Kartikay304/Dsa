// 0015_matrix_spiral.cpp

// Problem: Print the matrix in spiral manner
// URL: https://takeuforward.org/plus/dsa/problems/print-the-matrix-in-spiral-manner?category=arrays&subcategory=faqs-medium&tab=description
// Goal: Given an M * N matrix, print the elements in a clockwise spiral manner. 

#include<bits/stdc++.h>
using namespace std;

vector<int> printSpiral(vector<vector<int>>& matrix ) {
    vector<int> ans;
    int row = matrix.size();
    int column = matrix[0].size();
    int top = 0;
    int bottom = row-1;
    int left = 0;
    int right = column-1;
    while(left<=right && top<=bottom) {
        for(int i=left;i<=right;i++) ans.push_back(matrix[top][i]);
        top++;
        for(int i=top;i<=bottom;i++) ans.push_back(matrix[i][right]);
        right--;
        if(top<=bottom) {
            for(int i=right;i>=left;i--) ans.push_back(matrix[bottom][i]);
            bottom--;
        }
        if(left<=right) {
            for(int i=bottom;i>=top;i--) ans.push_back(matrix[i][left]);
            left++;
        }
    }
    return ans;
}

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n, vector<int> (m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
        cin>>matrix[i][j];
    }
    vector<int> ans = printSpiral(matrix);
    for(auto it : ans) cout<<it<<" ";
}