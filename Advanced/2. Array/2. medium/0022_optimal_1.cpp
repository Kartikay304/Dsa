// 0022_arrayThree_sum.cpp

// Problem: Three Sum
// URL: https://takeuforward.org/plus/dsa/problems/3-sum?category=arrays&subcategory=faqs-medium&tab=description&approach=brute
// Goal: Given an integer array nums. Return all triplets such that: i!=j, i!=k, and j!=k AND nums[i] + nums[j] + nums[k] == 0.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> vec) {
    set<vector<int>> tripleSet;
    set<int> hashset;
    int n=vec.size();
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            int target = (vec[i]+vec[j])*-1;
            if(hashset.find(target)!=hashset.end()) {
                vector<int> temp = {vec[i],vec[j],target};
                sort(temp.begin(),temp.end());
                tripleSet.insert(temp);
            }
            hashset.insert(vec[j]);
        }
        hashset.clear();
    }
    vector<vector<int>> ans(tripleSet.begin(),tripleSet.end());
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