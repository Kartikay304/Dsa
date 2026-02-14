// 0021_optimal_1.cpp

// Problem: Two Sum
// URL: https://takeuforward.org/plus/dsa/problems/two-sum?category=arrays&subcategory=faqs-medium
// Goal: Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> vec, int  target) {
    unordered_map <int,int> mpp;
    int left_over_part,n=vec.size();
    for(int i=0;i<n;i++) {
        left_over_part=target-vec[i];
        if(mpp.find(left_over_part) != mpp.end()) return {mpp[left_over_part],i};
        mpp[vec[i]]=i;
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