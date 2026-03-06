// 0047_checkSorted.cpp

// Problem: Check if the Array is Sorted I
// URL: https://takeuforward.org/plus/dsa/problems/check-if-the-array-is-sorted-i?subject=dsa
// Goal: Given an array arr of size n, the task is to check if the given array is sorted in 
//       s(ascending / Increasing / Non-decreasing) order. If the array is sorted then return True, else return False.

#include<bits/stdc++.h>
using namespace std;

 bool arraySortedOrNot(int arr[], int n) {
    for(int i=0;i<n-1;i++) if(arr[i]>arr[i+1]) return 0;
    return 1;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    if(arraySortedOrNot(arr,n)) cout<<"Sorted";
    else cout<<"Un-Sorted";
}