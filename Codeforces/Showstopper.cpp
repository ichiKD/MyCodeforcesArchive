#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int a[200];
int b[200];
void solve() {
	int n;
	cin>> n;
	for(int i=0; i<n; i++){
		cin>> a[i];
		
	}
	for(int i=0; i<n; i++){
		cin>> b[i];
	}
	sort(a, a+n);
	sort(b, b+n);
	if(n==1){
		if(a[n-1]==b[n-1]){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	if(a[n-1]==b[n-1]){
		cout<<"YES\n";
	}
	else if(a[n-2]>b[n-1]&&a[n-2]==a[n-1]){
		cout<<"YES\n"; 
	}
	else if(b[n-2]>a[n-1]&&b[n-2]==b[n-1]){
		cout<<"YES\n";  
	}
	else{
		cout<<"NO\n"; 
	}
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
