// 0032_longConseq.cpp

// Problem: Longest Consecutive Sequence in Array
// URL: https://takeuforward.org/plus/dsa/problems/longest-consecutive-sequence-in-an-array?subject=dsa
// Goal: Given an array nums of n integers. Return the length of the longest sequence of consecutive integers. The integers in this sequence can appear in any order.

#include<bits/stdc++.h>
using namespace std;

int longConseq(vector<int> nums, int n) {
    unordered_set<int> st;
    int longest=INT_MIN;
    for(auto it:nums) st.insert(it);
    for(auto it:st) {
        if(st.find(it-1)==st.end()) {
            int count=1;
            int num=it;
            while(st.find(num+1)!=st.end()) {
                count++;
                num++;
            }
            longest=max(longest,count);
        }
    }
    return longest;
}

int main() {
    int n,num;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin>>num;
        nums.push_back(num);
    }
    cout<<longConseq(nums,n);
}