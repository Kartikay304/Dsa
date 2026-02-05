// 0001_pattern_1.cpp

/* For N=4 =>   ****      For N=3 => *** 
                ****                 ***
                ****                 ***
                **** 
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-1?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) cout<<"* ";
        cout<<"\n";
    }
}