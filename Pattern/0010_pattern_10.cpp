// 0010_pattern_10.cpp

/* n=5 =>   *
            **
            ***
            ****
            *****
            ****
            ***
            **
            *
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-10?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

void upward(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) cout<<"*";
        cout<<endl;
    }
}
 
void downward(int n) {
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) cout<<"*";
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    upward(n);
    downward(n-1);
}