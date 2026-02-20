// 0024_maxiSum_subarray.cpp

// Problem: Find the subarray with the largest sum
// URL: https://takeuforward.org/plus/dsa/problems/kadane's-algorithm?category=arrays&subcategory=faqs-medium
// Goal: Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.

#include<bits/stdc++.h>
using namespace std;

vector<int> maximum_subArray(vector<int> nums,int n) {
    int sum=0,maxi=INT_MIN,low,high;
    bool flag=true;
    for(int i=0;i<n;i++) {
        sum+=nums[i];
        if(sum>maxi) {
            maxi=sum;
            if(flag) { low=i; flag=false; }
            high=i;
        }
        if(sum<0) {
            sum=0;
            flag=true;
        }
    }
    return {low,high};
}

int main() {
    int n,num;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin>>num;
        nums.push_back(num);
    }
    vector<int> maxSubarray=maximum_subArray(nums,n);
    for(int i=maxSubarray[0];i<=maxSubarray[1];i++) cout<<nums[i]<<" ";
}
