// 0026_majorElement_II.cpp

// Problem: Majority Element-II
// URL: https://takeuforward.org/plus/dsa/problems/majority-element-ii?category=arrays&subcategory=faqs-hard
// Goal: Given an integer array nums of size n. Return all elements which appear more than n/3 times in the array. The output can be returned in any order.

#include<bits/stdc++.h>
using namespace std;

vector<int> majorElements(vector<int> nums, int n) {
    unordered_map<int,int> mpp;
    vector<int> ans;
    for(int i=0;i<n;i++) mpp[nums[i]]++;
    for(auto it:mpp) {
        if(it.second>n/3) ans.push_back(it.first);
    }
    return ans;
}

int main() {
    int n,num;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin>>num;
        nums.push_back(num);
    }
    vector<int> ans = majorElements(nums,n);
    for(auto it:ans) cout<<it<<" ";
}