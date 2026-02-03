/* N=5 =>
            1        1
            12      21
            123    321
            1234  4321
            1234554321
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<i+1;j++) cout<<j+1;
        for(int j=0;j<2*n-2*(i+1);j++) cout<<" ";
        for(int j=i;j>=0;j--) cout<<j+1;
        cout<<endl;
    }
}