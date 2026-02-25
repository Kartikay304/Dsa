// 0028_countInversion.cpp

// Problem: Count Inversions
// URL: https://takeuforward.org/plus/dsa/problems/count-inversions?category=arrays&subcategory=faqs-hard&tab=description
// Goal: Given an integer array nums. Return the number of inversions in the array.

#include<bits/stdc++.h>
using namespace std;

int inversions(vector<int>& nums,int leftLow,int leftHigh,int rightLow,int rightHigh) {
    int left=leftLow,count=0;
    vector<int> ans;
    while(leftLow<=leftHigh && rightLow<=rightHigh){
        if(nums[leftLow]<=nums[rightLow]) ans.push_back(nums[leftLow++]);
        else {
            count+=leftHigh-leftLow+1;
            ans.push_back(nums[rightLow++]);
        }
    }
    while(leftLow<=leftHigh) ans.push_back(nums[leftLow++]);
    while(rightLow<=rightHigh) ans.push_back(nums[rightLow++]);
    for(int i=0;i<ans.size();i++) nums[left+i]=ans[i];
    return count;
}

int countInversion(vector<int>& nums, int low, int high) {
    int count=0;
    if(low<high) {
        int mid=low+(high-low)/2;
        count+=countInversion(nums,low,mid);
        count+=countInversion(nums,mid+1,high);
        count+=inversions(nums,low,mid,mid+1,high);
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
    int ans = countInversion(nums,0,n-1);
    cout<<ans;
}