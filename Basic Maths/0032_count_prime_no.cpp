// 0032_count_prime_no.cpp

// Problem: Count of Prime Numbers till N
// URL: https://takeuforward.org/plus/dsa/problems/count-of-prime-numbers-till-n?category=beginner-problem&subcategory=basic-maths
// Goal: Given an integer number n, count number of prime numbers in the range [1, n] (inclusive).

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) return 0;
    }
    return 1;
}

int countPrime(int n) {
    int count=0;
    for(int i=2;i<=n;i++) {
        if(isPrime(i)) count++; 
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    cout<<countPrime(n);
    return 0;
}