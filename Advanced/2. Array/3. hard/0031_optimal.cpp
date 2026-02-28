// 0031_mergeArray.cpp

// Problem: Merge two sorted arrays without extra space
// URL: https://takeuforward.org/plus/dsa/problems/merge-two-sorted-arrays-without-extra-space?category=arrays&subcategory=faqs-hard
// Goal: Given two integer arrays nums1 and nums2. Both arrays are sorted in non-decreasing order. Merge both the arrays into a single array sorted in non-decreasing order.

#include<bits/stdc++.h>
using namespace std;

vector<int> mergeArray(vector<int> nums1,int m,vector<int> nums2,int n) {
    int leftHigh=m-n-1,rightHigh=n-1,k=m-1;
    while(leftHigh>=0 && rightHigh>=0) {
        if(nums1[leftHigh]>=nums2[rightHigh]) nums1[k--]=nums1[leftHigh--];
        else nums1[k--]=nums2[rightHigh--];
    } 
    while(rightHigh>=0) nums1[k--]=nums2[rightHigh--];
    return nums1;
}

int main() {
    int n,m,num;
    cin>>m;
    vector<int> nums1,nums2;
    for(int i=0;i<m;i++) {
        cin>>num;
        nums1.push_back(num);
    }
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>num;
        nums2.push_back(num);
    }
    vector<int> ans = mergeArray(nums1,m,nums2,n);
    for(auto it:ans) cout<<it<<" ";
}