// 0022_arrayThree_sum.cpp

// Problem: Three Sum
// URL: https://takeuforward.org/plus/dsa/problems/3-sum?category=arrays&subcategory=faqs-medium&tab=description&approach=brute
// Goal: Given an integer array nums. Return all triplets such that: i!=j, i!=k, and j!=k AND nums[i] + nums[j] + nums[k] == 0.

#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    int n=nums.size();

    for(int i=0;i<n;i++) {
        while(i>0 && nums[i] == nums[i-1]) i++;
        int left=i+1,right=n-1;

        while(left<right) {
            int sum=nums[left]+nums[right]+nums[i];
            if(sum<0) left++;
            else if(sum>0) right--;
            else {
                vector<int> temp ={nums[i],nums[left],nums[right]};
                ans.push_back(temp);
                left++;
                right--;
                while(left<right && nums[left]==nums[left-1]) left++;
                while(left<right && nums[right]==nums[right+1]) right--;
            }
        }
    }
    return ans;
}

int main() {
    int n,num;
    vector<int> vec;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec.push_back(num);
    }
    vector<vector<int>> ans = threeSum(vec);
    for(auto it : ans){
        for(auto ele : it) cout<<ele<<" ";
        cout<<endl;
    }
}