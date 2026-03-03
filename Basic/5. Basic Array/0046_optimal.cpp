// 0046_reverseArray.cpp

// Problem: Reverse an array
// URL: https://takeuforward.org/plus/dsa/problems/reverse-an-array?category=beginner-problem&subcategory=basic-arrays
// Goal: Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n) {
    int i=0,j=n-1;
    while(i<=j) {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    reverseArray(arr,n);
    for(auto it : arr) cout<<it<<" ";
}