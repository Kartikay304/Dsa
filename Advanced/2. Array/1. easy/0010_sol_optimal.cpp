// 0010_optimal_find_missingNo.cpp

// Problem: Find missing number
// URL: https://takeuforward.org/plus/dsa/problems/find-missing-number?category=arrays&subcategory=logic-building
// Goal: Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.

#include<bits/stdc++.h>
using namespace std;

int missingNo(vector<int>& vec, int n) {
    int xor1=0, xor2=0;
    for (int i = 0; i < n; i++) {
        xor1=xor1^(i+1);
        xor2=xor2^vec[i];
    }
    return (xor1^xor2);
    
}

int main() {
    int n,num;
    vector<int> vec;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec.push_back(num);
    }
    cout<<missingNo(vec,n)<<endl;
}