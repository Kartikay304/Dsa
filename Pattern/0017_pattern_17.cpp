// 0017_pattern_17.cpp

/*  N=5 =>   A
            ABA
           ABCBA
          ABCDCBA
         ABCDEDCBA
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-17?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
         char ch='A';
        for(int j=0;j<n-i;j++) cout<<" ";
        for(int j=0;j<2*i+1;j++) {
            cout<<ch;
            if(j<i) ch++;
            else ch--;
        }
        cout<<endl;
    }
}