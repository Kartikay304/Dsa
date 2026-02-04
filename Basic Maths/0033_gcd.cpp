// 0033_gcd.cpp

// Problem: GCD of Two Numbers
// URL: https://takeuforward.org/plus/dsa/problems/gcd-of-two-numbers?category=beginner-problem&subcategory=basic-maths
// Goal: Given two integers return their gcd. The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

#include <bits/stdc++.h>
using namespace std;

int gcd(int n1,int n2) {
    for(int i=min(n1,n2);i>0;i--) {
        if(n1%i==0 && n2%i==0) return i;
    }
}

int main() {
    int n1,n2;
    cin>>n1>>n2;
    cout<<(gcd(n1,n2));
    return 0;
}