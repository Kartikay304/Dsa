// 0040_largest_odd_susbtring.cpp

// Problem: Largest Odd Number in a String
// URL: https://takeuforward.org/plus/dsa/problems/largest-odd-number-in-a-string?category=beginner-problem&subcategory=basic-strings
// Goal: Given a string s, return the largest-valued odd integer (as a string) that is a substring of the given string s. The number returned should not have leading zero's.

#include <bits/stdc++.h>
using namespace std;

string largest_odd_no(string& str) {
    string largestOdd="";
    int low=0,high=str.size()-1;
    while(str[low]=='0') low++;
    while(int(str[high])%2==0) high--;
    if(low>high) return "";
    return str.substr(low,high-low+1);
}

int main() {
    string str;
    cin>>str;
    cout<<largest_odd_no(str);
    return 0;
}