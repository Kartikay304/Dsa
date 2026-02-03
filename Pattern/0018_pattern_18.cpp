// 0018_pattern_18.cpp

/*  N=5 =>  E 
            D E 
            C D E 
            B C D E 
            A B C D E
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-18?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        char ch='A'+n-1-i;
        for(int j=0;j<=i;j++) {
            cout<<char(ch);
            ch++;
        }
        cout<<endl;
    }
}