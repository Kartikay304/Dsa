// 0029_reversePairs.cpp

// Problem: Reverse Pairs
// URL: https://takeuforward.org/plus/dsa/problems/reverse-pairs?category=arrays&subcategory=faqs-hard
// Goal: Given an integer array nums. Return the number of reverse pairs in the array. 
//       An index pair (i, j) is called a reverse pair if: 0 <= i < j < nums.length && nums[i] > 2 * nums[j]

#include<bits/stdc++.h>
using namespace std;

int reversePairs(vector<int> nums, int n) {
    int count=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(nums[i]>2*nums[j]) count++;
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
    int ans = reversePairs(nums,n);
    cout<<ans;
}