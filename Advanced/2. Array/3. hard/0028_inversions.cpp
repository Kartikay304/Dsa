// 0028_countInversion.cpp

// Problem: Count Inversions
// URL: https://takeuforward.org/plus/dsa/problems/count-inversions?category=arrays&subcategory=faqs-hard&tab=description
// Goal: Given an integer array nums. Return the number of inversions in the array.

#include<bits/stdc++.h>
using namespace std;

int countInversion(vector<int> nums, int n) {
    int count=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(nums[i]>nums[j] && i<j) count++;
        }
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
    int ans = countInversion(nums,n);
    cout<<ans;
}