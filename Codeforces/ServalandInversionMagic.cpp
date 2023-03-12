#include <bits/stdc++.h>
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

using namespace std;


int main(){
	fastIO;
	int testcases;
	long long int n, check;
	string st;
	cin>>testcases;
	while(testcases--){
		cin>>n;
		cin>>st;
		int t=n/2;
		check=1;
		for(int i=0;i<t;i++){
			if(st[i]!=st[n-1-i]){
				for(int j=i+1;j<t;j++){
					if(st[j]==st[n-1-j]){
						for(int k=j+1;k<t;k++){
							if(st[k]!=st[n-1-k]){
								check=0;
								break;
							}
						}
						break;
					}
				}
				break;
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