// 0011_union_ofSorted_Array.cpp

// Problem: Union of two sorted arrays
// URL: https://takeuforward.org/plus/dsa/problems/union-of-two-sorted-arrays?category=arrays&subcategory=logic-building&tab=description
// Goal: Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.

#include<bits/stdc++.h>
using namespace std;

vector<int> unionOfVectors(vector<int>& vec1, vector<int>& vec2, int n, int m) {
    vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m) {
        int val = (vec1[i]<vec2[j])? vec1[i] : vec2[j];
        if( ans.empty() || ans.back()!=val) ans.push_back(val);
        if(vec1[i]==val) i++;
        if(vec2[j]==val) j++;
    }
    while(i<n) ans.push_back(vec1[i++]);
    while(j<m) ans.push_back(vec2[j++]);
    return ans;
}

int main() {
    int n,m,num;
    vector<int> vec1, vec2;
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec1.push_back(num);
    }
    for(int i=0;i<m;i++) {
        cin>>num;
        vec2.push_back(num);
    }
    vector<int> ans =unionOfVectors(vec1,vec2,n,m);
    for(auto it : ans) cout<<it<<" ";
}