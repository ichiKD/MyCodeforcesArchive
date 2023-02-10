#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));
#define MOD 1000000007

int main(){
	fastIO;
	int n;
	int left, right;
	long long int ans;
	long long int a[3200];
	long long int POW[3200];
	POW[0]=1;
	for(int i=1;i<3200;i++){
		POW[i]=2*POW[i-1]%MOD;
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ans=0;
	for(int i=0;i<n;i++){
		left=i;
		right=i;
		for(int j=i+1;j<n;j++){
			while(left>=0&&a[i]-a[left]<=a[j]-a[i]){
				left--;
			}
			while(right<n&&a[right]-a[j]<a[j]-a[i]){
				right++;
			}
			ans+=POW[left+1]*POW[n-right];
			ans%=MOD;
		}
	}
	cout<<ans;
	return 0;
}