// 0034_lcm.cpp

// Problem: LCM of Two Numbers
// URL: https://takeuforward.org/plus/dsa/problems/lcm-of-two-numbers?category=beginner-problem&subcategory=basic-maths&tab=description&approach=optimal
// Goal: Given two integers return their lcm. The Lowest Common Multiple (LCM) of two integers is the lowest positive integer that is divisible by both the integers.
#include <bits/stdc++.h>
using namespace std;

int GCD(int n1,int n2) {
    while(n1>0 && n2>0) {
        if(n1>n2) n1=n1%n2;
        else n2=n2%n1;
    }
    return (n1>0)?n1:n2;
}

int lcm(int n1,int n2) {
    return (n1*n2)/GCD(n1,n2);
}

int main() {
    int n1,n2;
    cin>>n1>>n2;
    cout<<(lcm(n1,n2));
    return 0;
}