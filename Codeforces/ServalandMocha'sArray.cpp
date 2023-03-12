#include <bits/stdc++.h>
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

using namespace std;


int main(){
	fastIO;
	int testcases;
	long long int n;
	long long int check;
	long long int a[200];
	cin>>testcases;
	while(testcases--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		check=0;
		for(int i=0;i<n&&!check;i++){
			for(int j=i+1;j<n;j++){
				if(__gcd(a[i], a[j])==1||__gcd(a[i], a[j])==2){
					check=1;
					break;
				}
			}
		}
		if(check){
			cout<<"yes\n";
		}
		else{
			cout<<"no\n";
		}
	}
	return 0;
}