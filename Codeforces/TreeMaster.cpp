#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));


long long int a[105000], p[105000];
long long int depth[105000], value[105000];
map<pair<int, int>, long long int> mset;

long long int depth_finder(int index){
	if(depth[index]!=-1){
		return depth[index];
	}
	else{
		depth[index]= 1+depth_finder(p[index]);
		value[index]= value[p[index]]+ a[index]*a[index]; 
		return depth[index];
	}
}

long long int query(int x, int y){
	pair<int, int> b={max(x, y), min(x, y)};
	if(mset.count(b)){
		return mset[b];
	}
	else if(depth[x]>2600){
		mset[b]=a[x]*a[y]+ query(p[x], p[y]);
		return mset[b];
	}
	else{
		long long int ans=0;
		while(x!=y){
			ans+=a[x]*a[y];
			x=p[x];
			y=p[y];
		}
		ans+=value[x];
		return ans;
	}
}

int main() {
    fastIO;
    int n, q;
	int x, y;
	cin>> n>> q;
	// zero based indexing
	for(int i=0; i<n; i++){
		cin>> a[i];
	}
	p[0]=-1;
	for(int i=1; i<n; i++){
		cin>> p[i];
		p[i]-=1;
	}
	for(int i=0; i<n; i++){
		depth[i]=-1;
	}
	depth[0]=0;
	value[0]=a[0]*a[0];
	for(int i=1; i<n ; i++){
		depth_finder(i);
	}
	for(int i=0; i<q; i++){
		cin>> x>> y;
		x-=1;
		y-=1;
		cout<< query(x, y)<< "\n"; 
	}
    return 0;
}