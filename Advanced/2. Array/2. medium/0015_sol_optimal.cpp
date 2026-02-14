// 0015_optimal_arrange_elements.cpp

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

vector<int> reArrange(vector<int>& vec, int n) {
    vector<int> ans(n,0);
    int positiveIndex=0, negativeIndex=1;
    for(int i=0;i<n;i++) {
        if(vec[i]<0){
            ans[negativeIndex]=vec[i];
            negativeIndex+=2;
        } else{
            ans[positiveIndex]=vec[i];
            positiveIndex+=2;
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
    vector<int> ans = reArrange(vec,n);
    for(auto it : ans) cout<<it<<" ";
}