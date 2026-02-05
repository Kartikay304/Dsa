// 0035_divisors.cpp

// Problem: Divisors of a Number
// URL: https://takeuforward.org/plus/dsa/problems/divisors-of-a-number?category=beginner-problem&subcategory=basic-maths
// Goal: You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order
#include <bits/stdc++.h>
using namespace std;

vector <int> findDivisors(int n) {
    vector <int>vec;
    for(int i=1;i*i<=n;i++) {
        if(n%i==0){
            vec.push_back(i);
            if(n/i!=i) vec.push_back(n/i);
        }
    }
    sort(vec.begin(),vec.end());
    return vec;
}

int main() {
    int n;
    cin>>n;
    vector <int> vec = findDivisors(n);
    for(auto it : vec) cout<<it<<" ";
    return 0;
}