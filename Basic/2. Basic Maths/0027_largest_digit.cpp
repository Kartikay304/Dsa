// 0027_largest_digit.cpp

// Problem: Return the Largest Digit in a Number
// URL: https://takeuforward.org/plus/dsa/problems/return-the-largest-digit-in-a-number?category=beginner-problem&subcategory=basic-maths
// Goal: Given an integer number n, return the largest digit present in the number.

#include <bits/stdc++.h>
using namespace std;

int largestDigit(int n) {
    int largest=0;
    while(n>0){
        if(n%10>largest) largest=n%10;
        n/=10;
    }
    return largest;
}

int main() {
    int n;
    cin>>n;
    cout<<largestDigit(n);
    return 0;
}