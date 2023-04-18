#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

long long int days[200500], extra[200500];

void solve() {
    long long int n, c, ans, r;
    long long int a[200500], b[200500];
    cin>> n>> c;
    for(int i=0; i<n; i++)    cin>> a[i];
    b[0]=0;
    for(int i=1; i<n; i++)    cin>> b[i];
    days[0]=0;
    extra[0]=0;
    for(int i=1; i<n; i++) {
        days[i]=days[i-1];
        if(extra[i-1]>=b[i]) {
            days[i]+=1;
            extra[i]= extra[i-1]-b[i];
        }
        else {
            r=(b[i]+a[i-1]-1-extra[i-1])/a[i-1];
            days[i]+= 1+r;
            extra[i]=extra[i-1]+a[i-1]*r-b[i];
        }
    }
    ans=(c+a[0]-1)/a[0];
    for(int i=1; i<n; i++) {
        ans=min(ans, days[i]+ (c+a[i]-1-extra[i])/a[i]);
    }
    cout<< ans<< "\n";
    return;
}

int main() {
    fastIO;
    int testcases;
    cin>>testcases;
    while(testcases--) {
        solve();
    }
    return 0;
}