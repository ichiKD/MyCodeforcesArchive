#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

void solve(){
	int n, q, temp;
	cin>>n>>q;
	int a[100500], b[100500];
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[i]=0;
	}
	if(q>=n){
		for(int i=0; i<n; i++){
			b[i]=1;
		}
	}
	else{
		temp=0;
		for(int i=n-1; i>=0; i--){
			if(temp>=a[i]){
				b[i]=1;
			}
			else{
				b[i]=1;
				temp++;
			}
			if(temp==q){
				for(int j=i; j>=0; j--){
					if(q>=a[j]){
						b[j]=1;
					}
				}
				break;
			}
		}
	}
	for(int i=0; i<n; i++){
		cout<<b[i];
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