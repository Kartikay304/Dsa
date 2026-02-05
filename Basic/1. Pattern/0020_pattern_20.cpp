// 0020_pattern_20.cpp

/* N=5 =>   *        *
            **      **
            ***    ***
            ****  ****
            **********
            ****  ****
            ***    ***
            **      **
            *        *
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-20?category=beginner-problem&subcategory=patterns
 
#include<bits/stdc++.h>
using namespace std;

void upward(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) cout<<"*";
        for(int j=0;j<(2*n-2)-2*i;j++) cout<<" ";
        for(int j=0;j<=i;j++) cout<<"*";
        cout<<endl;
    }
}

void downward(int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) cout<<"*";
        for(int j=0;j<2*i+2;j++) cout<<" ";
        for(int j=0;j<n-i-1;j++) cout<<"*";
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    upward(n);
    downward(n);
}