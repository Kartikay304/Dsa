// 0015_arrange_elements.cpp

// Problem: Rearrange array elements by sign
// URL: https://takeuforward.org/plus/dsa/problems/rearrange-array-elements-by-sign?category=arrays&subcategory=faqs-medium
/* Goal: Given an integer array nums of even length consisting of an equal number of positive and negative integers.
        Return the answer array in such a way that the given conditions are met:
        --> Every consecutive pair of integers have opposite signs.
        --> For all integers with the same sign, the order in which they were present in nums is preserved.
        --> The rearranged array begins with a positive integer.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> reArrange(vector<int>& vec) {
    vector<int> positive, negative, ans;
    for(int i=0;i<vec.size();i++) {
        if(vec[i]<0) negative.push_back(vec[i]);
        else positive.push_back(vec[i]);
    }
    for(int i=0;i<vec.size()/2;i++) {
        ans.push_back(positive[i]);
        ans.push_back(negative[i]);
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
    vector<int> ans = reArrange(vec);
    for(auto it : ans) cout<<it<<" ";
}