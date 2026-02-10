// 0014_leaders_InArray.cpp

// Problem: Leaders in an Array
// URL: https://takeuforward.org/plus/dsa/problems/leaders-in-an-array?category=arrays&subcategory=faqs-medium
// Goal: Given an integer array nums, return a list of all the leaders in the array.

#include<bits/stdc++.h>
using namespace std;

vector<int> findLeaders(vector<int>& vec) {
    vector<int> ans;
    int n=vec.size()-2;
    ans.push_back(vec[n+1]);
    for(int i=n;i>=0;i--) {
        if(vec[i]>ans.back()) ans.push_back(vec[i]);
    }
    reverse(ans.begin(),ans.end());
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
    vector<int> ans = findLeaders(vec);
    for(auto it : ans) cout<<it<<" ";
}