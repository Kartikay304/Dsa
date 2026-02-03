// 0019_pattern_19.cpp

/*  n=5=>   **********
            ****  ****
            ***    ***
            **      **
            *        *
            *        *
            **      **
            ***    ***
            ****  ****
            **********
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-19?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

// void upward(int n) {
//     for(int j=0;j<2*n;j++) cout<<"*";
//     cout<<endl;
//     for(int i=1;i<n;i++) {
//         for(int j=n;j>i;j--) cout<<"*";
//         for(int j=1;j<2*i+1;j++) cout<<" ";
//         for(int j=n;j>i;j--) cout<<"*";
//         cout<<endl;
//     }
// }

// void downward(int n) {
//     for(int i=1;i<n;i++) {
//         for(int j=0;j<i;j++) cout<<"*";
//         for(int j=0;j<2*n-2*i;j++) cout<<" ";
//         for(int j=0;j<i;j++) cout<<"*";
//         cout<<endl;
//     }
//     for(int j=0;j<2*n;j++) cout<<"*";
//     cout<<endl;
// }

void upward(int n) {
    for (int i=0;i<n;i++) {
        for(int j=0;j<n-i;j++) cout<<"*";
        for(int j=0;j<2*i;j++) cout<<" ";
        for(int j=0;j<n-i;j++) cout<<"*";
        cout<<endl;
    }
}

void downward(int n){
    for(int i=0;i<n;i++) {
        for(int j=0;j<i+1;j++) cout<<"*";
        for(int j=0;j<(2*n-2)-2*i;j++) cout<<" ";
        for(int j=0;j<i+1;j++) cout<<"*";
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    upward(n);
    downward(n);
}