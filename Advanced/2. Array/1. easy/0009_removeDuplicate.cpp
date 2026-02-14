// 0009_removeDuplicates.cpp

// Problem: Remove duplicates from sorted array
// URL: https://takeuforward.org/plus/dsa/problems/remove-duplicates-from-sorted-array?category=arrays&subcategory=logic-building
// Goal: Given an integer array nums sorted in non-decreasing order, remove all duplicates in-place so that each unique element appears only once.

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& vec, int n) {
    int j=1,i=0;
    while(j<n) {
        if(vec[i]!=vec[j] ) vec[++i]=vec[j++];
        else j++;
    }
    return i+1;
}

int main() {
    int n,num;
    vector<int> vec;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec.push_back(num);
    }
    cout<<removeDuplicates(vec,n)<<endl;
    for(auto it : vec) cout<<it<<" ";
}