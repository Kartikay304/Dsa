// 0016_pattern_16.cpp

/*  N=5 =>  A
            BB
            CCC
            DDDD
            EEEEE
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-16?category=beginner-problem&subcategory=patterns 

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) cout<<char('A'+i)<<" ";
        cout<<endl;
    }
}