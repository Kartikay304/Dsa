// 0033_longsubarr_sumK.cpp

// Problem: Longest subarray with sum K
// URL: https://takeuforward.org/plus/dsa/problems/longest-subarray-with-sum-k?subject=dsa
// Goal: Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.
#include<bits/stdc++.h>
using namespace std;

int longestSubarrSum(vector<int> nums, int k) {
    unordered_map<int,int> mpp;
    int sum=0,maxi=0;
    for(int i=0;i<nums.size();i++) {
        sum+=nums[i];
        if(sum==k) maxi=max(maxi,i+1);
        if(mpp.find(sum-k)!=mpp.end()) maxi=max(maxi,i-mpp[sum-k]);
        if(mpp.find(sum)==mpp.end()) mpp[sum]=i;
    }
    return maxi;
}

int main() {
    int n,num,k;
    cin>>n>>k;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin>>num;
        nums.push_back(num);
    }
    cout<<longestSubarrSum(nums,k);
}