// 0029_reversePairs.cpp

// Problem: Reverse Pairs
// URL: https://takeuforward.org/plus/dsa/problems/reverse-pairs?category=arrays&subcategory=faqs-hard
// Goal: Given an integer array nums. Return the number of reverse pairs in the array. 
//       An index pair (i, j) is called a reverse pair if: 0 <= i < j < nums.length && nums[i] > 2 * nums[j]

#include<bits/stdc++.h>
using namespace std;

int calInverse(vector<int>& nums,int leftLow,int leftHigh,int rightLow, int rightHigh) {
    int count=0,right=rightLow;
    for(int i=leftLow;i<=leftHigh;i++) {
        while(rightLow<=rightHigh && nums[i]>2*nums[rightLow]) rightLow++;
        count+=rightLow-right;
    }
    return count;
}

void merge(vector<int>& nums,int leftLow,int leftHigh,int rightLow, int rightHigh) {
    int left=leftLow;
    vector<int> ans;
    while(leftLow<=leftHigh && rightLow<=rightHigh) {
        if(nums[leftLow]<=nums[rightLow]) ans.push_back(nums[leftLow++]);
        else ans.push_back(nums[rightLow++]);
    }
    while(leftLow<=leftHigh) ans.push_back(nums[leftLow++]);
    while(rightLow<=rightHigh) ans.push_back(nums[rightLow++]);
    for(int i=0;i<ans.size();i++) nums[left+i]=ans[i];
}

int reversePairs(vector<int>& nums, int low,int high) {
    int count=0;
    if(low<high)  {
        int mid=low+(high-low)/2;
        count+=reversePairs(nums,low,mid);
        count+=reversePairs(nums,mid+1,high);
        count+=calInverse(nums,low,mid,mid+1,high);
        merge(nums,low,mid,mid+1,high);
    }
    return count;
}

int main() {
    int n,num;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin>>num;
        nums.push_back(num);
    }
    int ans = reversePairs(nums,0,n);
    cout<<ans;
}