#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	fastIO;
	int testcases;
	int n;
	int T;
	int x, y;
	cin>>testcases;
	while(testcases--){
		cin>>n;
		if(n%2==0){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
			T=(3*n+1)/2;
			x=1;
			y=T;
			while(x<n+2){
				cout<<x<<" "<<y<<"\n";
				y-=1;
				x+=2;
			}
			y=2*n;
			x=2;
			while(x+y<=T+n){
				cout<<x<<" "<<y<<"\n";
				y-=1;
				x+=2;
			}
		}
	}
	return 0;
}