// 0014_pattern_14.cpp

/*  N=5 =>  A
            AB
            ABC
            ABCD
            ABCDE
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-14?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(char ch='A';ch<='A'+i;ch++) cout<<ch<<" ";
        cout<<endl;
    }
}