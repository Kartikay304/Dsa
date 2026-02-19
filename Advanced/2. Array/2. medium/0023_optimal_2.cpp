// 0023_arrayFour_sum.cpp

// Problem: Four Sum
// URL: https://takeuforward.org/plus/dsa/problems/4-sum?category=arrays&subcategory=faqs-medium
// Goal: Given an integer array nums and an integer target. Return all quadruplets [nums[a], nums[b], nums[c], nums[d]] such that: nums[a] + nums[b] + nums[c] + nums[d] == target.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> nums,int target) {
    vector<vector<int>> ans;
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
    while(i>0 && nums[i]==nums[i-1]) i++;
        for(int j=i+1;j<n;j++) {
            while(j>i+1 && nums[j]==nums[j-1]) j++;
            int left=j+1,right=n-1;
            while(left<right) {
                int sum=nums[i]+nums[j]+nums[left]+nums[right];
                if(sum==target) {
                    vector<int> temp = {nums[i],nums[j],nums[left],nums[right]};
                    ans.push_back(temp);
                    left++; right--;
                    while(left<right && nums[left]==nums[left-1]) left++;
                    while(right>left && nums[right]==nums[right+1]) right--;
                } else if(sum<target) left++;
                else right--;
            }
        }
    }
   return ans;
}

int main() {
    int n,num,target;
    cin>>n>>target;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin>>num;
        nums.push_back(num);
    }
    vector<vector<int>> ans = fourSum(nums,target);
    for(auto it : ans) {
        for(auto ele : it) cout<<ele<<" ";
        cout<<endl;
    }
}