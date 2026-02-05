// 0001_selection_stable.cpp

// Problem: Selection Sort
// URL: https://takeuforward.org/plus/dsa/problems/selection-sort?category=sorting&subcategory=algorithms
// Goal: Sort the array in non-decreasing order using the selection sort algorithm and return the sorted array.

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector <int>& vec) {
    for(int i=0;i<vec.size()-1;i++) {
        int minIndex=i;
        for(int j=i+1;j<vec.size();j++) {
            if(vec[j]<vec[minIndex]) minIndex=j;
        }
        int key =vec[minIndex];
        if(minIndex!=i) {
            for(int k=minIndex;k>i;k--) vec[k]=vec[k-1];
            vec[i]=key;
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
    selectionSort(vec);
    for(auto it : vec) cout<<it<<" ";
    return 0;
}