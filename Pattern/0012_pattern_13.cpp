// 0013_pattern_13.cpp

/*  N=5 =>  1 
            2 3 
            4 5 6 
            7 8 9 10 
            11 12 13 14 15
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-13?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k=1;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++,k++) cout<<k<<" ";
        cout<<endl;
    }
}