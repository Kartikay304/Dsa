// 0012_intersection_ofSorted_Array.cpp

// Problem: Intersection of two sorted arrays
// URL: https://takeuforward.org/plus/dsa/problems/intersection-of-two-sorted-arrays?category=arrays&subcategory=logic-building
// Goal: Given two sorted arrays, nums1 and nums2, return an array containing the intersection of these two arrays. 

#include<bits/stdc++.h>
using namespace std;

vector<int> intersectionOfVectors(vector<int>& vec1, vector<int>& vec2, int n, int m) {
    vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m) {
        if(vec1[i]<vec2[j]) i++;
        else if(vec1[i]>vec2[j]) j++;
        else { 
            ans.push_back(vec1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main() {
    int n,m,num;
    vector<int> vec1, vec2;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec1.push_back(num);
    }
    cin>>m;
    for(int i=0;i<m;i++) {
        cin>>num;
        vec2.push_back(num);
    }
    vector<int> ans = intersectionOfVectors(vec1,vec2,n,m);
    for(auto it : ans) cout<<it<<" ";
}