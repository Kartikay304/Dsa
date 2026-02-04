// 0030_perfect_no.cpp

// Problem: Check for Perfect Number
// URL: https://takeuforward.org/plus/dsa/problems/check-for-perfect-number?category=beginner-problem&subcategory=basic-maths
// Goal: Given an integer number n, return true if it's Perfect number. A perfect number is a number whose proper divisors (excluding the number itself) add up to the number itself.

#include <bits/stdc++.h>
using namespace std;

int isPerfect(int n) {
    int perfect_no=1;
    if(n==1 || n==0) return 0;
    for(int i=2;i*i<=n;i++) {
        if(n%2==0){
            perfect_no+=i;
            if(n/i!=i) perfect_no+=n/i;
        }
    }
    return perfect_no==n;
}

int main() {
    int n;
    cin>>n;
    if(isPerfect(n)) cout << "YES" << endl; 
    else cout << "NO" << endl;
    return 0;
}