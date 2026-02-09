// 0005_quickSort_random.cpp

// Problem: Randomized Quick Sort
// URL: https://takeuforward.org/plus/dsa/problems/quick-sorting?category=sorting&subcategory=algorithms
// Goal: Given an array of integers, nums,sort the array in non-decreasing order using the quick sort algorithm.

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& vec, int low, int high) {
    int randLimit = low + rand()%(high-low+1);
    swap(vec[low],vec[randLimit]);
    int pivot = vec[low];
    int i=low,j=high;
    while(i<j) {
        while(pivot>=vec[i] && i<=high) i++;
        while(pivot<=vec[j] && j>low ) j--;
        if(i<j) swap(vec[i],vec[j]);
    }
    swap(vec[low],vec[j]);
    return j;
}

void quickSort(vector<int>& vec, int low, int high) {
    if(low<high) {
        int pIndex=partition(vec,low,high);
        quickSort(vec,low,pIndex-1);
        quickSort(vec,pIndex+1,high);
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
    quickSort(vec,0,n-1);
    for(auto it : vec) cout<<it<<" ";
    return 0;
}