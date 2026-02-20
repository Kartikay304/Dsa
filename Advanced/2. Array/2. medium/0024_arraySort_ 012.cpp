// 0024_arraySort_012.cpp

// Problem: Sort an array of 0's 1's and 2's
// URL: https://takeuforward.org/plus/dsa/problems/sort-an-array-of-0's-1's-and-2's?category=arrays&subcategory=faqs-medium
// Goal: Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array.

#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& nums,int n) {
    int left=0,right=n-1;
    while(left<=right) {
        if(nums[left]!=0 && nums[right]==0) swap(nums[left++],nums[right--]);
        else if(nums[left]!=0 && nums[right]!=0) right--;
        else if(nums[left]==0 && nums[right]==0) left++;
        else if(nums[left]==0 && nums[right]!=0) {
            left++; right--;
        }
    }
    right=n-1;
    while(left<=right) {
        if(nums[left]!=1 && nums[right]==1) swap(nums[left++],nums[right--]);
        else if(nums[left]!=1 && nums[right]!=1) right--;
        else if(nums[left]==1 && nums[right]==1) left++;
        else if(nums[left]==1 && nums[right]!=1) {
            left++; right--;
        }
    }
}

int main() {
    int n,num;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin>>num;
        nums.push_back(num);
    }
    sortArray(nums,n);
    for(auto it : nums) cout<<it<<" ";
}