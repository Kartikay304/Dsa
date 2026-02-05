// 0010_pattern_11.cpp

/*
    1 
    0 1 
    1 0 1 
    0 1 0 1 
    1 0 1 0 1
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-11?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,start;
    cin>>n;
    for(int i=0;i<n;i++) {  
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++) {
           cout<<start;
           start=1-start;
        }
        cout<<endl;
    }
}