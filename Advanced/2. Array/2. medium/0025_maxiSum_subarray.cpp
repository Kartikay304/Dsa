// 0024_maxiSum_subarray.cpp

// Problem: Find the subarray with the largest sum
// URL: https://takeuforward.org/plus/dsa/problems/kadane's-algorithm?category=arrays&subcategory=faqs-medium
// Goal: Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.

#include<bits/stdc++.h>
using namespace std;

int maximum_subArray(vector<int> nums,int n) {
    int sum,maxi=INT_MIN;
    for(int i=0;i<n;i++) {
        sum=0;
        for(int j=i;j<n;j++) {
            sum+=nums[j];
            maxi=max(maxi,sum);
        }
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
    int maxSum=maximum_subArray(nums,n);
    cout<<maxSum;
}
