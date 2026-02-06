// 0035_height_occuring_element.cpp

// Problem: Highest Occurring Element in an Array
// URL: https://takeuforward.org/plus/dsa/problems/highest-occurring-element-in-an-array?category=beginner-problem&subcategory=basic-hashing
// Goal: Given an array nums of n integers, find the most frequent element in it

#include <bits/stdc++.h>
using namespace std;

int heighestOccuring(vector<int>& vec, int n) {
    unordered_map <int,int> mpp;
    int maxFreq=0,minEle;
    for(int i=0;i<n;i++) mpp[vec[i]]++;
    for(auto it : mpp) {
        int ele=it.first;
        int eleFreq=it.second;
        if(eleFreq>maxFreq) {
            maxFreq=eleFreq;
            minEle=ele;
        }
        else if(maxFreq==eleFreq) minEle=min(minEle,ele); 
    }
    
    return minEle;
}

int main() {
    int n,num;
    cin>>n;
    vector <int> vec;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec.push_back(num);
    }
    cout<<"Height Occurring Element is:: "<<heighestOccuring(vec,n);
    return 0;
}