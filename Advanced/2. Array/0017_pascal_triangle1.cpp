// 0017_pascal_triangle1.cpp

// Problem: Pascal's Triangle I
// URL: https://takeuforward.org/plus/dsa/problems/pascals-triangle-i?category=arrays&subcategory=faqs-medium
// Goal: Given two integers r and c, return the value at the rth row and cth column (1-indexed) in a Pascal's Triangle.

#include<bits/stdc++.h>
using namespace std;

int combination(int n, int r) {
    int ans=1;
    if(r>n-r) r=n-r;
    if(r==1 || r==0) return n;
    for(int i=0;i<r;i++) {
        ans = ans * (n-i)/(i+1);
    }
    return ans;
}

int main() {
    int r,c;
    cin>>r>>c;
    cout<<combination(r-1,c-1);
}