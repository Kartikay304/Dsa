// 0037_sum_highLow.cpp

// Problem: Sum of Highest and Lowest Frequency
// URL: https://takeuforward.org/plus/dsa/problems/sum-of-highest-and-lowest-frequency?category=beginner-problem&subcategory=basic-hashing&tab=description&approach=optimal
// Goal: Given an array of n integers, find the sum of the frequencies of the highest occurring number and lowest occurring number.

#include <bits/stdc++.h>
using namespace std;

int sumFrequency(vector<int>& vec, int n) {
    unordered_map <int,int> mpp;
    int maxFreq=INT_MIN, minFreq=INT_MAX;
    for(int i=0;i<n;i++) mpp[vec[i]]++;
    for(auto it : mpp) {
        int freq=it.second;
        if(freq>maxFreq) maxFreq=freq;
        if(freq<minFreq) minFreq=freq;
    }
    return maxFreq+minFreq;
}

int main() {
    int n,num;
    cin>>n;
    vector <int> vec;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec.push_back(num);
    }
    cout<<"Sum of Frequencies of Lowest and Highest Occurring Element is:: "<<sumFrequency(vec,n);
    return 0;
}