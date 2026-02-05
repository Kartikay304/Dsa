// 0028_factorial.cpp

// Problem: Factorial of a given number
// URL: https://takeuforward.org/plus/dsa/problems/factorial-of-a-given-number-i?category=beginner-problem&subcategory=basic-maths
// Goal: Given an integer number n, return it's factorial

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int fact=1;
    for(int i=2;i<=n;i++) fact*=i;
    return fact;
}

int main() {
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}