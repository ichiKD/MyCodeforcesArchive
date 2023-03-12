#include <bits/stdc++.h>
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

using namespace std;

int main(){
	fastIO;
	int testcases;
	long long int n, index;
	long long int x, m;
	long long int a[200500], b[200500], pmf[200500];
	long long int ans[200500], cnt[200500];
	cin>>testcases;
	while(testcases--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		pmf[0]=b[0];
		for(int i=1;i<n;i++){
			pmf[i]=pmf[i-1]+b[i];
		}
		for(int i=0;i<n;i++){
			cnt[i]=0;
			ans[i]=0;
		}
		for(int i=0;i<n;i++){
			if(i==0){
				x=a[i];
			}
			else{
				x=a[i]+pmf[i-1];
			}
			index=lower_bound(pmf+i, pmf+n, x)-pmf;
			if(index==n){
				++cnt[n];
			}
			else{
				if(index==0){
					ans[0]+=x;
					cnt[0]+=1;
				}
				else{
					x=x-pmf[index-1];
					ans[index]+=x;
					++cnt[index];
				}
			}
		}
		m=0;
		for(int i=0;i<n;i++){
			m-=cnt[i];
			m++;
			ans[i]+=m*b[i];
		}
		for(int i=0;i<n;i++){
			cout<<ans[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}