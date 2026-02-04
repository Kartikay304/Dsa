// 0031_prime_no.cpp

// Problem: Check for Prime Number
// URL: https://takeuforward.org/plus/dsa/problems/check-for-prime-number?category=beginner-problem&subcategory=basic-maths
// Goal: Given an integer number n, return true if it's Prime number.A prime number is a number which has no divisors except 1 and itself.

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n==1 || n==0) return 0;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) return 0;
    }
    return 1;
}

int main() {
    int n;
    cin>>n;
    if(isPrime(n)) cout << "YES" << endl; 
    else cout << "NO" << endl;
    return 0;
}