#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	fastIO;
	int testcases;
	int n;
	long long int temp,num;
	long long int ans;
	multiset<int> mset;
	cin>>testcases;
	while(testcases--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>temp;
			mset.insert(temp-i-1);
		}
		ans=0;
		for(auto it=mset.begin();it!=mset.end();){
			if(mset.count(*it)==1){
				it++;
			}
			else{
				num=mset.count(*it);
				ans+=(num)*(num-1)/2;
				while(num--) it++;
			}
		}
		cout<<ans<<"\n";
		mset.clear();
	}
	return 0;
}