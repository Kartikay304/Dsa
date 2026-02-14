// 0010_find_missingNo.cpp

// Problem: Find missing number
// URL: https://takeuforward.org/plus/dsa/problems/find-missing-number?category=arrays&subcategory=logic-building
// Goal: Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.

#include<bits/stdc++.h>
using namespace std;

int missingNo(vector<int>& vec, int n) {
    int sumReal = (n*(n+1))/2;
    int sumActual=0;
    for(auto it : vec) sumActual+=it;
    return sumReal-sumActual;
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