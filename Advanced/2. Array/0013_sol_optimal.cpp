// 0013_optimal_majorityElement.cpp

// Problem: Majority Element
// URL: https://takeuforward.org/plus/dsa/problems/majority-element-i?category=arrays&subcategory=faqs-medium&tab=description&approach=optimal
// Goal: Given an integer array nums of size n, return the majority element of the array.

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& vec, int n) {
    int count=0,countEle=0;
    int currentEle;
    for(auto it : vec) {
        if(count==0) currentEle=it;
        if(currentEle==it) count++;
        else count--;
    }
    for(int i=0;i<n;i++) if(vec[i]==currentEle) countEle++;
    if(countEle>n/2) return currentEle;
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