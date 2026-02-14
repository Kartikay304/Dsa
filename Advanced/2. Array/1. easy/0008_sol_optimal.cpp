// 0008_optimal_move_zeroToend.cpp

// Problem: Move Zeros to End
// URL: https://takeuforward.org/plus/dsa/problems/move-zeros-to-end?category=arrays&subcategory=logic-building
// Goal: Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same.

#include<bits/stdc++.h>
using namespace std;

void moveZeros(vector<int>& vec, int n) {
    int j=0;
    for(int i=0;i<n;i++) {
        if(vec[i]!=0) {
            swap(vec[i],vec[j]);
            j++;
        }
    }
}

int main() {
    int n,num;
    vector<int> vec;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec.push_back(num);
    }
    moveZeros(vec,n);
    for(auto it : vec) cout<<it<<" ";
}