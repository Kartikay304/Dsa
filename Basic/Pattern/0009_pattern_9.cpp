// 0009_pattern_9.cpp

/*  N=5 =>       * 
                ***
               *****
              *******
             *********
             *********
              *******
               *****
                ***
                 *
*/
//URL:https://takeuforward.org/plus/dsa/problems/pattern-9?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

void upward_triangle(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) cout<<" ";
        for(int j=0;j<2*i+1;j++) cout<<"*";
        cout<<endl;
    }
}
void inverted_triangle(int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) cout<<" ";
        for(int j=0;j<(2*n-1)-2*i;j++) cout<<"*";
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    upward_triangle(n);
    inverted_triangle(n);
}
