// 0004_pattern_4.cpp
/*   N=5=>  1
            22
            333
            4444
            55555
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-4?category=beginner-problem&subcategory=patterns 

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=0;j<i;j++) cout<<i<<" ";
        cout<<endl;
    }
}