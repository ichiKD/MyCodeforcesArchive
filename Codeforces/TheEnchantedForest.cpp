#include <bits/stdc++.h>
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

using namespace std;


int main(){
	fastIO;
	int testcases;
	long long int n, k;
	long long int ans;
	long long int a[200500], pmf[200500];
	cin>>testcases;
	while(testcases--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		pmf[0]=a[0];
		for(int i=1;i<k&&i<n;i++){
			pmf[i]=pmf[i-1]+a[i];
		}
		for(int i=k;i<n;i++){
			pmf[i]=pmf[i-1]+a[i]-a[i-k];
		}
		if(k>=n){
			ans=pmf[n-1];
			ans+=n*k;
			ans-=n*(n+1)/2;
			cout<<ans<<"\n";
		}
		else{
			ans=pmf[k-1];
			for(int i=k;i<n;i++){
				ans=max(ans, pmf[i]);
			}
			ans+=k*(k-1)/2;
			cout<<ans<<"\n";
		}
	}
	return 0;
}