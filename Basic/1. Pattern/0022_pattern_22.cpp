// 0022_pattern_22.cpp

/* N=5 =>   5 5 5 5 5 5 5 5 5 
            5 4 4 4 4 4 4 4 5 
            5 4 3 3 3 3 3 4 5 
            5 4 3 2 2 2 3 4 5 
            5 4 3 2 1 2 3 4 5 
            5 4 3 2 2 2 3 4 5 
            5 4 3 3 3 3 3 4 5 
            5 4 4 4 4 4 4 4 5 
            5 5 5 5 5 5 5 5 5
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-22?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<2*n-1;i++) {
        for(int j=0;j<2*n-1;j++) {
            int top=i, bottom=2*n-2-i, left=j,right=2*n-2-j;
            cout<<n-min(min(top,bottom),min(left,right))<<" ";
        }
        cout<<endl;
    }

}