// 0005_quick_sort.cpp

// Problem: Quick Sort
// URL: https://takeuforward.org/plus/dsa/problems/quick-sorting?category=sorting&subcategory=algorithms
// Goal: Given an array of integers, nums,sort the array in non-decreasing order using the quick sort algorithm.

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& vec, int low, int high) {
    int pivot = vec[low], i =low;
    for(int j=i+1; j<=high;j++) {
        if(vec[j]<=pivot) {
            i++;
            swap(vec[j],vec[i]);
        }
    }
    swap(vec[i],vec[low]);
    return i;
}

void quickSort(vector<int>& vec, int low, int high){
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