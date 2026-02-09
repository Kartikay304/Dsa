// 0004_merge_sort.cpp

// Problem: Merge Sort
// URL: https://takeuforward.org/plus/dsa/problems/merge-sorting?category=sorting&subcategory=algorithms
// Goal: Given an array of integers, nums,sort the array in non-decreasing order using the merge sort algorithm.

#include <bits/stdc++.h>
using namespace std;

void combine(vector <int>& vec, int leftLow, int leftHigh, int rightLow, int rightHigh ) {
    vector<int> ans;
    int i=leftLow;
    while( leftLow<=leftHigh && rightLow<=rightHigh) {
        if(vec[leftLow]<=vec[rightLow]) ans.push_back(vec[leftLow++]);
        else ans.push_back(vec[rightLow++]);
    }
    while(leftLow<=leftHigh) ans.push_back(vec[leftLow++]);
    while(rightLow<=rightHigh) ans.push_back(vec[rightLow++]);
    for(int j=0;j<ans.size();j++) vec[i+j]=ans[j];
}

void mergeSort(vector <int>& vec, int low, int high) {
    if(low<high) {
        int mid = low + (high-low)/2;
        mergeSort(vec,low,mid);
        mergeSort(vec,mid+1,high);
        combine(vec,low,mid,mid+1,high);
    } 
}

int main() {
    int n,num;
    vector <int>vec;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec.push_back(num);
    }
    mergeSort(vec,0,n-1);
    for(auto it : vec) cout<<it<<" ";
    return 0;
}