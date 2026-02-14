// 0007_osl_optimal.cpp

// Problem: Left Rotate Array by K Places
// URL: https://takeuforward.org/plus/dsa/problems/left-rotate-array?category=arrays&subcategory=fundamentals&tab=description
// Goal: Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.

#include<bits/stdc++.h>
using namespace std;

void reverseVector(vector<int>& vec,int low, int high) {
    while(low<=high) swap(vec[low++],vec[high--]); 
}

void rotateVec(vector<int>& vec, int n, int k) {
    k=k%n;
    reverseVector(vec,0,k-1);
    reverseVector(vec,k,n-1);
    reverseVector(vec,0,n-1);
}

int main() {
    int n,num,k;
    vector<int> vec;
    cin>>n>>k;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec.push_back(num);
    }
    rotateVec(vec,n,k);
    for(auto it : vec) cout<<it<<" ";
}