#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));
const string STR="FBFFBFFB";
bool check(string st) {
    int k=0;
    int check=0;
    while(k<8) {
        check=1;
        for(int i=0; i<st.length(); i++) {
            if(STR[(k+i)%8]!=st[i]) {
                check=0;
                break;
            }
        }
        if(check)return 1;
        k++;
    }
    return 0;
}
int main() {
    fastIO;
    int testcases;
    int n;
    string st;
    cin>>testcases;
    while (testcases--) {
        cin>>n;
        cin>>st;
        if(check(st)) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    return 0;
}