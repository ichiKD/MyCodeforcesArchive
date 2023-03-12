#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int a[100500];
void solve(){
	int n;
	cin>> n;
	for(int i=0; i<n; i++){
		cin>> a[i];
	}
	for(int i=0; i<n-1; i++){
		if(a[i]==1){
			++a[i];
		}
	}
	for(int i=1; i<n; i++){
		if(a[i]%a[i-1]==0){
			++a[i];
		}
	}
	for(int i=0; i<n; i++){
		cout<< a[i]<< " ";
	}
	cout<<"\n";
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