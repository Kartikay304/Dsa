// 0027_missingRepeating_Ele.cpp

// Problem: Find the repeating and missing number
// URL: https://takeuforward.org/plus/dsa/problems/find-the-repeating-and-missing-number?category=arrays&subcategory=faqs-hard
// Goal: Given an integer array nums of size n containing values from [1, n] and each value appears exactly once in the array, except for A, which appears twice and B which is missing.
#include<bits/stdc++.h>
using namespace std;

vector<int> missRep(vector<int> nums, int n) {
    int sum=0,sq=0;
    for(int i=0;i<n;i++) {
        sum+=nums[i];
        sq+=nums[i]*nums[i];
    }
    int nSum=n*(n+1)/2;
    int sqSum=n*(n+1)*(2*n+1)/6;
    int eq1=nSum-sum;
    int eq2=sqSum-sq;
    int missingEle = (eq2/eq1 +eq1)/2;
    int repeatedEle = missingEle-eq1;
    return {repeatedEle,missingEle};
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