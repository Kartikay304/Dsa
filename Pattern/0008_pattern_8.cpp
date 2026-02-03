// 0008_pattern_8.cpp

/* N=5=>  *********
           *******
            *****
             ***
              *
*/
//URL:https://takeuforward.org/plus/dsa/problems/pattern-8?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) cout<<" ";
        for(int j=0;j<(2*n-1)-(2*i);j++) cout<<"*";
        cout<<endl;
    }
}
