// 0006_pattern_6.cpp

/*   N=5=>  12345
            1234
            123
            12
            1
*/
//URL: https://takeuforward.org/plus/dsa/problems/pattern-6?category=beginner-problem&subcategory=patterns

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i;j++) cout<<j+1<<" ";
        cout<<endl;
    }
}