// 0026_palindrome.cpp

// Problem: Palindrome Number
// URL: https://takeuforward.org/plus/dsa/problems/palindrome-number?category=beginner-problem&subcategory=basic-maths
// Goal: Check if given number is palindrome or not. A palindrome number is a number which reads the same both left to right and right to left.

#include <bits/stdc++.h>
using namespace std;

int reverseNum(int n) {
    int reverse_num = 0;
    while(n > 0) {
        reverse_num = reverse_num * 10 + n % 10;
        n /= 10;
    }
    return reverse_num;
}

bool isPalindrome(int n) {
    if (n < 0) return false; // Negative numbers are not palindromes
    return reverseNum(n) == n;
}

int main() {
    int n;
    cin>>n;
    
    if(isPalindrome(n)) cout << "YES" << endl; 
    else cout << "NO" << endl;
    
    return 0;
}