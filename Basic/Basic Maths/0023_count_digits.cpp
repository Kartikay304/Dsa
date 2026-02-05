// 0023_count_digits.cpp

// Problem: Count all Digits of a Number
// URL: https://takeuforward.org/plus/dsa/problems/count-all-digits-of-a-number?category=beginner-problem&subcategory=basic-maths
// Goal: Return the number of digits in the number

#include <bits/stdc++.h>
using namespace std;

int countDigit(int n) {
        int count=0;
        if(n==0) return 1;
        while(n>0) {
            n/=10;
            count++;
        }
        return count;
    }

int main() {
    int n;
    cin>>n;
    cout<<countDigit(n);
}