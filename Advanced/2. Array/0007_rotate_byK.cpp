// 0007_rotate_byK.cpp

// Problem: Left Rotate Array by K Places
// URL: https://takeuforward.org/plus/dsa/problems/left-rotate-array?category=arrays&subcategory=fundamentals&tab=description
// Goal: Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.

#include<bits/stdc++.h>
using namespace std;

void rotateVec(vector<int>& vec, int n, int k) {
    vector<int> temp;
    for(int i=0;i<k;i++) temp.push_back(vec[i]);
    for(int i=0;i<n-k;i++) vec[i]=vec[i+k];
    for(int i=0;i<temp.size();i++) vec[n-k+i]=temp[i];
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