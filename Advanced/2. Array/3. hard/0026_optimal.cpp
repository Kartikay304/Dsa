// 0026_majorElement_II.cpp

// Problem: Majority Element-II
// URL: https://takeuforward.org/plus/dsa/problems/majority-element-ii?category=arrays&subcategory=faqs-hard
// Goal: Given an integer array nums of size n. Return all elements which appear more than n/3 times in the array. The output can be returned in any order.

#include<bits/stdc++.h>
using namespace std;

vector<int> majorElements(vector<int> nums, int n) {
    int count1=0,count2=0,ele1,ele2;
    for(int i=0;i<n;i++) {
        if(count1==0 && nums[i]!=ele2) { ele1=nums[i]; count1++; }
        else if(count2==0 && nums[i]!=ele1) {ele2=nums[i]; count2++; }
        else if(nums[i]==ele1) count1++;
        else if(nums[i]==ele2) count2++;
        else {
            count1--;
            count2--;
        }
    }
    count1=0; count2=0;
    for(int i=0;i<n;i++) {
        if(nums[i]==ele1) count1++;
        if(nums[i]==ele2) count2++;
    }
    vector<int> ans;
    if(count1==n/3+1) ans.push_back(ele1);
    if(count2==n/3+1 && ele2!=ele1) ans.push_back(ele2);
    return ans;
}

int main() {
    int n,num;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin>>num;
        nums.push_back(num);
    }
    vector<int> ans = majorElements(nums,n);
    for(auto it:ans) cout<<it<<" ";
}