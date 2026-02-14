// 0013_majorityElement.cpp

// Problem: Majority Element
// URL: https://takeuforward.org/plus/dsa/problems/majority-element-i?category=arrays&subcategory=faqs-medium&tab=description&approach=optimal
// Goal: Given an integer array nums of size n, return the majority element of the array.

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& vec, int n) {
    unordered_map<int,int> mpp;
    for(auto it : vec) mpp[it]++;
    for(auto it : mpp) if(it.second>n/2) return it.first;
    return -1;
}

int main() {
    int n,num;
    vector<int> vec;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec.push_back(num);
    }
    int flag = majorityElement(vec,n);
    if(flag!=-1) cout<<"Majority ELement is :: "<<flag;
    else cout<<"No Majority Element";
}