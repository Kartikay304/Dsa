// 0002_bubble_sort.cpp

// Problem: Bubble Sort
// URL: https://takeuforward.org/plus/dsa/problems/bubble-sort?category=sorting&subcategory=algorithms
// Goal: Sort the array in non-decreasing order using the bubble sort algorithm and return the sorted array.

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector <int>& vec) {
    bool eleswap=false;
    for(int i=0;i<vec.size()-1;i++) {
        for(int j=0;j<vec.size()-1-i;j++) {
            if(vec[j]>vec[j+1]) {
                swap(vec[j],vec[j+1]);
                eleswap=true;
            }
        }
        if(!eleswap) break;
    }
}

int main() {
    int n,num;
    vector <int>vec;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>num;
        vec.push_back(num);
    }
    bubbleSort(vec);
    for(auto it : vec) cout<<it<<" ";
    return 0;
}