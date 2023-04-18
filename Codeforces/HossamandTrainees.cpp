#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int length;
int a[100500];
int sieve[100500];
vector<int> prime;

void solve(){
	int n, temp, check=0;
	map<int, int> m;
	cin>> n;
	for(int i=0;i<n;i++){
		cin>> a[i];
	}
	for(int i=0; i<n&&!check; i++){
		temp=sqrt(a[i]);
		// vector<int> prime_divisors={};
		for(int j=0; prime[j]<=temp; j++){
			if(a[i]%prime[j]==0){
				// prime_divisors.push_back(prime[j]);
				if(m.count(prime[j])){
					check=1;
					break;
				}
				else{
					m[prime[j]]=1;
				}
				while(a[i]%prime[j]==0){
					a[i]=a[i]/prime[j];
				}
			}
		}
		if(a[i]>1){
			// prime_divisors.push_back(a[i]);
			if(m.count(a[i])){
				check=1;
				break;
			}
			else{
				m[a[i]]=1;
			}
		}
		/*
		for(auto it=prime_divisors.begin(); it!=prime_divisors.end(); it++){
			cout<< *it<< " ";
		}
		cout<< "\n";
		*/
	}
	
	if(check){
		cout<< "YES\n";
	}
	else{
		cout<< "NO\n";
	}
	return;
}
int main(){
	fastIO;
	// precompute
	for(int i=2;i<100500;i++){
		sieve[i]=i;
	}
	for(int i=2; i<100500; i++){
		if(sieve[i]==i){
			prime.push_back(i);
			for(int j=i*2; j<100500; j+=i){
				sieve[j]=i;
			}
		}
	}
	length=prime.size();
	int testcases;
	cin>> testcases;
	while(testcases--){
		solve();
	}	
	return 0;
}