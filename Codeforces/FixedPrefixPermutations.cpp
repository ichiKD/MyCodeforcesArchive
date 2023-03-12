#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

void solve(){
	int n, m, index;
	int ans;
	cin>>n>>m;
	vector<vector<int>> vec(n, vector<int>(m));
	vector<vector<int>> b(n, vector<int>(m));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>vec[i][j];
			vec[i][j]--;
			b[i][vec[i][j]]=j;
		}
	}
	sort(b.begin(), b.end());
	// r(j)=q(pj)
	// r(j)=j till the largest possible j
	// j=q(pj)
	// q-1(j)=p(j)
	// now we search for the maximum possible j
	for(int i=0; i<n; i++){
		index=lower_bound(b.begin(), b.end(), vec[i])-b.begin();
		ans=0;
		if(index>0){
			for(int j=0; j<m; j++){
				if(vec[i][j]==b[index-1][j]){
					ans=max(ans, j+1);
				}
				else{
					break;
				}
			}
		}
		if(index<n){
			for(int j=0; j<m; j++){
				if(vec[i][j]==b[index][j]){
					ans=max(ans, j+1);
				}
				else{
					break;
				}
			}
		}
		cout<<ans<<" ";
	}
	cout<<"\n";
}
int main() {
    fastIO;
    int testcases;
	cin>>testcases;
	while(testcases--){
		solve();
	}
	return 0;
}
	