#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main() {
    fastIO;
    int testcases;
    int a, b;
    cin>>testcases;
    while (testcases--) {
        cin>>a>>b;
        cout<<2*(a-b)<<"\n";
        for(int i=a; i>=b; i--) {
            cout<<i<<" ";
        }
        for(int i=b+1; i<a; i++) {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}