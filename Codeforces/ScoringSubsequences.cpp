#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int a[500500];
int ans[500500];
void solve(){
	int n;
	cin>> n;
	for(int i=0; i<n; i++){
		cin>> a[i];
	}
	ans[0]=1;
	for(int i=1; i<n; i++){
		ans[i]=ans[i-1];
		for(int j=i-ans[i]; j>=0; j--){
			if(a[j]>=ans[i]+1){
				++ans[i];
			}
			else{
				break;
			}
		}
	}
	for(int i=0; i<n; i++){
		cout<< ans[i]<< " ";
	}
	cout<< "\n";
	return;
}
int main(){
	fastIO;
    int testcases;
	cin>>testcases;
	while(testcases--){
		solve();
	}
	return 0;
}