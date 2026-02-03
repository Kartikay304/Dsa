// 0015_pattern_15.cpp

/*  N=5 =>  ABCDE
            ABCD
            ABC
            AB
            A
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-15?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(char j='A';j<'A'+n-i;j++) cout<<j<<" ";
        cout<<endl;
    }
}