// 0021_optimal_1.cpp

// Problem: Two Sum
// URL: https://takeuforward.org/plus/dsa/problems/two-sum?category=arrays&subcategory=faqs-medium
// Goal: Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> vec, int  target) {
    vector<vector<int>> matrix;
    int n=vec.size();
    int left=0,right=n-1;
    for(int i=0;i<n;i++) matrix.push_back({vec[i],i});
    sort(matrix.begin(),matrix.end());
    while(left<right) {
        int sum = matrix[left][0] + matrix[right][0];
        if(sum==target) return {matrix[left][1],matrix[right][1]};
        else if(sum<target) left++;
        else right--;
    }
    return {-1,-1};
}

int main() {
    int n,num,target;
    vector<int> vec;
    cin>>n>>target;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec.push_back(num);
    }
    vector<int> ans = twoSum(vec,target);
    for(auto it:ans) cout<<it<<" ";
}