// 0005_pattern_5.cpp

/*   N=5=>  *****
            ****
            ***
            **
            *
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-5?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=n-i;j>0;j--) cout<<"* ";
        cout<<endl;
    }
}