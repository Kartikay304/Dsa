// 0025_nextPermutation.cpp

// Problem: Next Permutation
// URL: https://takeuforward.org/plus/dsa/problems/next-permutation?category=arrays&subcategory=faqs-medium
// Goal: Given an integer array nums, find the next permutation.

#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums,int n) {
    int index=-1;
    for(int i=n-1;i>=0;i--) {
        if(nums[i]>nums[i-1]) {
            index=i-1;
            break;
        }
    }
    if(index==-1) {
        reverse(nums.begin(),nums.end());
        return;
    }
    for(int i=n-1;i>index;i--) { 
        if(nums[i]>nums[index]) { 
            swap(nums[i],nums[index]); 
            return; 
        }
    }
    reverse(nums.begin()+index+1,nums.end());
}

int main() {
    int n,num;
    vector<int> nums;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>num;
        nums.push_back(num);
    }
    nextPermutation(nums,n);
    for(auto it:nums) cout<<it<<" ";
}