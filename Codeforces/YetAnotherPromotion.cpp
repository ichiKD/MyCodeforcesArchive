#include <bits/stdc++.h>
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

using namespace std;


int main(){
	fastIO;
	int testcases;
	long long int a, b, n, m;
	long long int ans;
	cin>>testcases;
	while(testcases--){
		cin>>a>>b>>n>>m;
		if(a<=b){
			ans=((n/(m+1))*m+n%(m+1))*a;
		}
		else{
			ans=min(n*b, (n/(m+1))*m*a+(n%(m+1))*b);
		}
		cout<<ans<<"\n";
	}
	return 0;
}