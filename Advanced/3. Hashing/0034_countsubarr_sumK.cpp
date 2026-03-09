// 0034_countsubarr_sumK.cpp

// Problem: count subarray with sum K
// URL: https://takeuforward.org/plus/dsa/problems/count-subarrays-with-given-sum?subject=dsa
// Goal: Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

#include<bits/stdc++.h>
using namespace std;

int countSubarrSum(vector<int> nums, int k) {
    int sum=0,count=0;
    unordered_map<int,int> mpp;
    mpp[0]=1;
    for(int i=0;i<nums.size();i++) {
        sum+=nums[i];
        count+=mpp[sum-k];
        mpp[sum]++;
    }
    return count;
}

int main() {
    int n,num,k;
    cin>>n>>k;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin>>num;
        nums.push_back(num);
    }
    cout<<countSubarrSum(nums,k);
}