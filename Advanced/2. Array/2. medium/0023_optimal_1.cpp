// 0023_arrayFour_sum.cpp

// Problem: Four Sum
// URL: https://takeuforward.org/plus/dsa/problems/4-sum?category=arrays&subcategory=faqs-medium
// Goal: Given an integer array nums and an integer target. Return all quadruplets [nums[a], nums[b], nums[c], nums[d]] such that: nums[a] + nums[b] + nums[c] + nums[d] == target.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> nums,int target) {
    set<vector<int>> quadrupleSet;
    set<int> hashset;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++) {
            for(int k=j+1;k<n;k++) {
                int sum = target-nums[i]-nums[j]-nums[k];
                if(hashset.find(sum)!=hashset.end()) {
                    vector<int> temp ={nums[i],nums[j],nums[k],sum};
                    sort(temp.begin(),temp.end());
                    quadrupleSet.insert(temp);
                }
                hashset.insert(nums[k]);
            }
            hashset.clear();
        }
    }
    vector<vector<int>> ans(quadrupleSet.begin(),quadrupleSet.end());
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