// 0027_missingRepeating_Ele.cpp

// Problem: Find the repeating and missing number
// URL: https://takeuforward.org/plus/dsa/problems/find-the-repeating-and-missing-number?category=arrays&subcategory=faqs-hard
// Goal: Given an integer array nums of size n containing values from [1, n] and each value appears exactly once in the array, except for A, which appears twice and B which is missing.
#include<bits/stdc++.h>
using namespace std;

vector<int> missRep(vector<int> nums, int n) {
    int hash[n+1]={0};
    int missingEle,repeatedEle;
    for(int i=0;i<n;i++) hash[nums[i]]++;
    for(int i=0;i<n+1;i++) {
        if(hash[i]==0) missingEle=i;
        if(hash[i]==2) repeatedEle=i;
    }
    return {missingEle,repeatedEle};
}

int main() {
    int n,num;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin>>num;
        nums.push_back(num);
    }
    vector<int> ans = missRep(nums,n);
    for(auto it:ans) cout<<it<<" ";
}