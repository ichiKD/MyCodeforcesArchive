
#include<bits/stdc++.h>

using namespace std;

const int N=200;
vector<int> adj[200];
int dist[200];
int black[200];
int ans=INT_MAX;

void init(int n){
	for(int i=0; i<n; i++){
		adj[i].clear();
		//black[i]=0;
		dist[i]=INT_MAX;
	}
	ans=INT_MAX;
}

void DFS(int last_i, int depth, int current_i){
	if(depth>= dist[current_i] || depth>= ans){
		return;
	}
	else{
		dist[current_i]=depth;
		for(int j: adj[current_i]){
			if(j!=last_i){
				DFS(current_i, depth+1, j);
			}
		}
		return;
	}
	return;
}

int main(){
	int testcases;
	int n, czero;
	int u, v;
	int c[200];
	cin>> testcases;
	while(testcases--){
		cin>> n>> czero;
		init(n);
		for(int i=0; i<n-1; i++){
			cin>> c[i];
			c[i]=c[i]-1;
		}
		for(int i=0; i<n-1; i++){
			cin>> u>> v;
			u= u-1;
			v= v-1;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		DFS(0, 0, czero);
		for(int v: c){
			ans=min(ans, dist[v]);
			DFS(0, 0, v);
			cout<< ans<< " ";
		}
		cout<< "\n";
	}
	return 0;
}