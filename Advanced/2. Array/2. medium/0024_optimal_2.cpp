// 0024_arraySort_012.cpp

// Problem: Sort an array of 0's 1's and 2's
// URL: https://takeuforward.org/plus/dsa/problems/sort-an-array-of-0's-1's-and-2's?category=arrays&subcategory=faqs-medium
// Goal: Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array.

#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& nums,int n) {
    int low=0,mid=0,high=n-1;
    while(mid<=high) {
        if(nums[mid]==0) swap(nums[low++],nums[mid++]);
        else if(nums[mid]==1) mid++;
        else swap(nums[mid],nums[high--]);
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