#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

#define MOD 200500

int main(){
	fastIO;
	int testcases;
	int n, k;
	int a[200500];
	int pmf1[200500];
	int pmf2[200500];
	cin>>testcases;
	while(testcases--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(a[0]==1){
			pmf1[0]=0;
		}
		else{
			pmf1[0]=1;
		}
		for(int i=1;i<n;i++){
			if(a[i]==2){
				pmf1[i]=pmf1[i-1]+1;
			}
			else{
				pmf1[i]=pmf1[i-1];
			}
		}
		if(a[n-1]==1){
			pmf2[n-1]=0;
		}
		else{
			pmf2[n-1]=1;
		}
		for(int i=n-2;0<=i;i--){
			if(a[i]==2){
				pmf2[i]=pmf2[i+1]+1;
			}
			else{
				pmf2[i]=pmf2[i+1];
			}
		}
		k=-1;
		for(int i=0;i<n-1;i++){
			if(pmf1[i]==pmf2[i+1]){
				k=i+1;
				break;
			}
		}
		cout<<k<<"\n";
	}
	return 0;
}