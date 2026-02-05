// 0003_pattern_3.cpp
/*  N=5=>  1
           12
           123
           1234
           12345
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-3?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0; j<=i;j++) cout<<j+1<<" ";
        cout<<endl;
    }
}
