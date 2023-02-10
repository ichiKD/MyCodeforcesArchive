#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	fastIO;
	int testcases;
	int n, k, len;
	int index, tar;
	string st, ans;
	cin>>testcases;
	vector<vector<int>> pos(10);
	while(testcases--){
		cin>>st;
		cin>>k;
		n=st.size();
		for(int i=0;i<n;i++){
			pos[st[i]-'0'].push_back(i);
		}
		for(int d=0;d<10;d++){
			reverse(pos[d].begin(), pos[d].end());
		}
		ans="";
		len=n-k;
		tar=0;
		for(int d=1;d<10;d++){
			while(!pos[d].empty()&&pos[d].back()<tar){
				pos[d].pop_back();
			}
			if(!pos[d].empty()&&pos[d].back()<=tar+k){
				ans+=d+'0';
				k-=pos[d].back()-tar;
				tar=pos[d].back()+1;
				break;
			}
		}
		for(int i=1;i<len;i++){
			for(int d=0;d<10;d++){
				while(!pos[d].empty()&&pos[d].back()<tar){
					pos[d].pop_back();
				}
				if(!pos[d].empty()&&pos[d].back()<=tar+k){
					ans+=d+'0';
					k-=pos[d].back()-tar;
					tar=pos[d].back()+1;
					break;
				}
			}
		}
		for(int d=0;d<10;d++){
			pos[d].clear();
		}
		cout<<ans<<"\n";
	}
	return 0;
}