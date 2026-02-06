// 0036_second_highest_occuring_element.cpp

// Problem: Second Highest Occurring Element
// URL: https://takeuforward.org/plus/dsa/problems/second-highest-occurring-element?category=beginner-problem&subcategory=basic-hashing
// Goal: Given an array of n integers, find the second most frequent element in it. If there are multiple elements that appear second most frequent times, find the smallest of them.

#include <bits/stdc++.h>
using namespace std;

int heighestOccuring(vector<int>& vec, int n) {
    unordered_map <int,int> mpp;
    int maxFreq=0,minEle,secFreq=0,secEle;
    for(int i=0;i<n;i++) mpp[vec[i]]++;
    for(auto it : mpp) {
        int ele=it.first;
        int eleFreq=it.second;
        if(eleFreq>maxFreq) {
            secEle=minEle;
            secFreq=maxFreq;
            maxFreq=eleFreq;
            minEle=ele;
        }
        else if(maxFreq==eleFreq) minEle=min(minEle,ele);
        else if(secFreq<eleFreq) {
            secEle=ele;
            secFreq=eleFreq;
        }
        else if(secFreq==eleFreq) secEle=min(secEle,ele);
    }
    
    return secEle;
}

int main() {
    int n,num;
    cin>>n;
    vector <int> vec;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec.push_back(num);
    }
    cout<<"Second Highest Occurring Element is:: "<<heighestOccuring(vec,n);
    return 0;
}