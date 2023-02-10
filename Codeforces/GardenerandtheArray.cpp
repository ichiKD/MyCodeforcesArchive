#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	fastIO;
	int testcases;
	int n, check, temp;
	int a[200500], k[200500];
	vector<vector<int>> vec;
	vector<int>vctr;
	memset(a, 0, sizeof(int)*100500);
	cin>>testcases;
	while(testcases--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>k[i];
			for(int j=0;j<k[i];j++){
				cin>>temp;
				temp=temp-1;
				vctr.push_back(temp);
				a[temp]+=1;
			}
			vec.push_back(vctr);
			vctr.clear();
		}
		check=0;
		for(int i=0;i<n&&!check;i++){
			check=1;
			for(int j=0;j<k[i];j++){
				if(a[vec[i][j]]==1){
					check=0;
					break;
				}
			}
		}
		for(auto v: vec){
			for(auto it: v){
				a[it]=0;
			}
		}
		vec.clear();
		if(check){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}