// 0002_pattern_2.cpp
/*   N=5=>  *
            **
            ***
            ****
            *****
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-2?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) cout<<"* ";
        cout<<endl;
    }
}
