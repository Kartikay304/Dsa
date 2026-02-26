// 0030_maxProduct_subarray.cpp

// Problem: Maximum Product Subarray in an Array
// URL: https://takeuforward.org/plus/dsa/problems/maximum-product-subarray-in-an-array?category=arrays&subcategory=faqs-hard
// Goal: Given an integer array nums. Find the subarray with the largest product, and return the product of the elements present in that subarray.

#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> nums,int n) {
    int maxi=INT_MIN;
    for(int i=0;i<n;i++) {
        int product=1;
        for(int j=i;j<n;j++) {
            product*=nums[j];
            maxi=max(product,maxi);
            if(product==0) product=1;
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
    int ans = maxProduct(nums,n);
    cout<<ans;
}