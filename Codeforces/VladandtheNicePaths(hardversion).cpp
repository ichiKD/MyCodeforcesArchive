#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

void solve(){
	long long int n, k, temp;
	long long int answer=0;
	vector<int> index[5000];
	cin>> n>> k;
	for(int i=0; i<n; i++){
		cin>> temp;
		index[temp].push_back(i);
	}
}

int main(){
	fastIO;
	int testcases;
	cin>> testcases;
	while(testcases--){
		solve();
	}
	return 0;
}