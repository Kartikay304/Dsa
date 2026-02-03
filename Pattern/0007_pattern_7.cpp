// 0007_pattern_7.cpp

/*   N=5=>    *
             ***
            *****
           *******
          *********
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-7?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) cout<<" ";
        for(int j=0;j<2*i+1;j++) cout<<"*";
        cout<<endl;
    }
}