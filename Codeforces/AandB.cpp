#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));


int main() {
    fastIO;
    int testcases;
    long long int a, b;
    long long int t;
    long long int ans, n, x;
    cin>>testcases;
    while(testcases--) {
        cin>>a>>b;
		x=max(a, b)-min(a, b);
		// b=x;
		// a=0;
		n=-1+sqrt(1+8*x);
		n=n/2;
		if(n*(n+1)/2==x){
			ans=n;
		}
		else{
			n=n+1;
			t=n*(n+1)/2-x;
			if(t%2==0){
				ans=n;
			}
			else{
				if((n+1)%2==1){
					ans=n+1;
				}
				else{
					ans=n+2;
				}
			}
		}
        cout<<ans<<"\n";
    }
    return 0;
}