// 0021_two_sum.cpp

// Problem: Two Sum
// URL: https://takeuforward.org/plus/dsa/problems/two-sum?category=arrays&subcategory=faqs-medium
// Goal: Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> vec, int  target) {
    int n = vec.size();
    vector<int> ans;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(vec[i]+vec[j]==target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
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