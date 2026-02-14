// 0006_consecutive_one.cpp

// Problem: Maximum Consecutive Ones
// URL: https://takeuforward.org/plus/dsa/problems/maximum-consecutive-ones?category=arrays&subcategory=fundamentals
// Goal: Given a binary array nums, return the maximum number of consecutive 1s in the array.

#include<bits/stdc++.h>
using namespace std;

int consecutiveOne(vector<int>& vec, int n) {
    int count=0,maxCount=0;
    for(int i=0;i<n;i++) {
        if(vec[i]==1) count++;
        else {
            maxCount=max(maxCount,count);
            count=0;
        }
    }
    return maxCount;
}

int main() {
    int n,num;
    vector<int> vec;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec.push_back(num);
    }
    cout<<"Maximum no of consicutive 1 is:: "<<consecutiveOne(vec,n);
}