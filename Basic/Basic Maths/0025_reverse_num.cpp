// 0025_reverse_num.cpp

// Problem: Reverse a Number
// URL: https://takeuforward.org/plus/dsa/problems/reverse-a-number?category=beginner-problem&subcategory=basic-maths
// Goal: Return the integer formed by placing digits in reverse order

#include <bits/stdc++.h>
using namespace std;

int reverseNum(int n) {
    int reverse_num=0;
    while(n>0) {
        reverse_num*=10;
        reverse_num += n%10;
        n/=10;
    }
    return reverse_num;
}

int main() {
    int n;
    cin>>n;
    cout<<reverseNum(n);
}