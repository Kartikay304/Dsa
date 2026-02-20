// 0024_arraySort_012.cpp

// Problem: Sort an array of 0's 1's and 2's
// URL: https://takeuforward.org/plus/dsa/problems/sort-an-array-of-0's-1's-and-2's?category=arrays&subcategory=faqs-medium
// Goal: Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array.

#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& nums,int n) {
    int count_0=0,count_1=0,count_2=0;
    for(int i=0;i<n;i++) {
        if(nums[i]==0) count_0++;
        else if(nums[i]==1) count_1++;
        else count_2++;
    }
    for(int i=0;i<count_0;i++) nums[i]=0;
    for(int i=count_0;i<count_0+count_1;i++) nums[i]=1;
    for(int i=count_0+count_1;i<nums.size();i++) nums[i]=2;
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