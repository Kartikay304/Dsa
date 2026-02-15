// 0023_arrayFour_sum.cpp

// Problem: Four Sum
// URL: https://takeuforward.org/plus/dsa/problems/4-sum?category=arrays&subcategory=faqs-medium
// Goal: Given an integer array nums and an integer target. Return all quadruplets [nums[a], nums[b], nums[c], nums[d]] such that: nums[a] + nums[b] + nums[c] + nums[d] == target.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> nums,int target) {
    int n=nums.size();
    set<vector<int>> quadrupleSet;
    for(int i=0;i<n-3;i++) {
        for(int j=i+1;j<n-2;j++) {
            for(int k=j+1;k<n-1;k++) {
                for(int l=k+1;l<n;l++) {
                    if(nums[i]+nums[j]+nums[k]+nums[l]==target) {
                        vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        quadrupleSet.insert(temp);
                    }
                }
            }
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