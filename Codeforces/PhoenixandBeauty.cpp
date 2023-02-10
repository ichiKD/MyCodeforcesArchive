#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	fastIO;
	int testcases, n, k, extra;
	int a[200];
	set<int> intset;
	cin>>testcases;
	while(testcases--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
			intset.insert(a[i]);
		}
		if(intset.size()>k){
			cout<<"-1\n";
			intset.clear();
			continue;
		}
		extra=k-intset.size();
		cout<<n*k;
		cout<<"\n";
		while(n--){
			for(auto it=intset.begin();it!=intset.end();it++){
				cout<<*it<<" ";
			}
			for(int i=0;i<extra;i++){
				cout<<"1 ";
			}
		}
		cout<<"\n";
		intset.clear();
	}
	return 0;
}