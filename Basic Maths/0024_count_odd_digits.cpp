// 0024_count_odD_ digits.cpp

// Problem: Count all Odd Digits in a Number
// URL: https://takeuforward.org/plus/dsa/problems/count-number-of-odd-digits-in-a-number?category=beginner-problem&subcategory=basic-maths
// Goal: Return the number of odd digits in the number

#include <bits/stdc++.h>
using namespace std;

int countDigit(int n) {
    int count=0;
    while(n>0) {
        int dig = n%10;
        if(dig%2!=0) count++;
        n/=10;
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    cout<<countDigit(n);
}