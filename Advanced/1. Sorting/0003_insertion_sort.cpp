// 0003_insertion_sort.cpp

// Problem: Insertion Sort
// URL: https://takeuforward.org/plus/dsa/problems/insertion-sorting?category=sorting&subcategory=algorithms
// Goal: Sort the array in non-decreasing order using the insertion sort algorithm and return the sorted array.

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector <int>& vec) {
    for(int i=1;i<vec.size();i++) {
        for(int j=i;j>0;j--) {
            if(vec[j]<vec[j-1]) swap(vec[j],vec[j-1]);
        }
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
    insertionSort(vec);
    for(auto it : vec) cout<<it<<" ";
    return 0;
}