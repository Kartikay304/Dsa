// 0029_armstrong.cpp

// Problem: Check if the Number is Armstrong
// URL: https://takeuforward.org/plus/dsa/problems/check-if-the-number-if-armstrong?category=beginner-problem&subcategory=basic-maths
// Goal: Given an integer number n, return true if it's Armstrong number.An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

#include <bits/stdc++.h>
using namespace std;

int isArmstrong(int n) {
    int armstrong=0, noDigits=log10(n)+1,m=n;
    while(n>0) {
        armstrong+=pow(n%10,noDigits);
        n/=10;
    }
    return armstrong==m;
}

int main() {
    int n;
    cin>>n;
    if(isArmstrong(n)) cout << "YES" << endl; 
    else cout << "NO" << endl;
    return 0;
}