#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));
#define MOD 1000000007

int main(){
	fastIO;
	int testcases;
	int k;
	int a, b;
	int T[100500];
	int pmf[100500];
	cin>>testcases>>k;
	T[0]=1;
	for(int i=0;i<k;i++){
		T[i]=1;
	}
	for(int i=k;i<100500;i++){
		T[i]=T[i-1]+T[i-k];
		T[i]%=MOD;
	}
	pmf[1]=T[1];
	for(int i=1;i<100500;i++){
		pmf[i]=pmf[i-1]+T[i];
		pmf[i]%=MOD;
	}
	while(testcases--){
		cin>>a>>b;
		cout<<(pmf[b]+MOD-pmf[a-1])%MOD<<'\n';
	}
	return 0;
}