// 0032_longConseq.cpp

// Problem: Longest Consecutive Sequence in an Array
// URL: https://takeuforward.org/plus/dsa/problems/longest-consecutive-sequence-in-an-array?subject=dsa
// Goal: Given an array nums of n integers. sReturn the length of the longest sequence of consecutive integers. The integers in this sequence can appear in any order.

#include<bits/stdc++.h>
using namespace std;

int longConseq(vector<int> nums, int n) {
    int count=1,maxi=1;
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i++) {
        if(nums[i]==nums[i-1]+1) count++;
        else if(nums[i]==nums[i-1]) continue;
        else count=1;
        maxi=max(maxi,count);
    }
    return maxi;
}

int main() {
    int n,num;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin>>num;
        nums.push_back(num);
    }
    cout<<longConseq(nums,n);
}