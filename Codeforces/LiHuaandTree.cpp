#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int n, m;
int visited[300500];
int subtree[300500];
int parent[300500];
long long int w[300500];
long long int importance[300500];
vector<int> adj[300500];
set<array<int, 2>> mpp[300500];

long long int DFS(int v){
	visited[v]=1;
	importance[v]=w[v];
	for(int i : adj[v]){
		if(visited[i]==0){
			parent[i]=v;
			importance[v]+=DFS(i);
			subtree[v]+=subtree[i]+1;
			array<int, 2> a={-subtree[i], i};
			mpp[v].insert(a);
		}
	}
	return importance[v];
}

int main(){
	fastIO;
	cin>> n>> m;
	for(int i=0; i<n; i++){
		cin>> w[i];
	}
	for(int i=0; i<n-1; i++){
		int v, u;
		cin>> v>> u;
		v--;
		u--;
		adj[v].push_back(u);
		adj[u].push_back(v);
	}
	for(int i=0; i<n; i++){
		importance[i]=0;
		subtree[i]=0;
		visited[i]=0;
	}
	DFS(0);
	for(int i=0; i<m; i++){
		int temp, node, heavy;
		cin>> temp>> node;
		if(temp==1){
			cout<< importance[node-1]<< "\n";
		}
		else{
			node--;
			if(subtree[node]==0){
				continue;
			}
			auto it=mpp[node].begin();
			array<int, 2> a=*it;
			mpp[node].erase(it);
			heavy=a[1];
			array<int, 2> b={-subtree[node], node};
			mpp[parent[node]].erase(b);
			importance[node]-=importance[heavy];
			importance[heavy]+=importance[node];
			subtree[node]-=subtree[heavy]+1;
			subtree[heavy]+=subtree[node]+1;
			array<int, 2> c={-subtree[node], node};
			mpp[heavy].insert(c);
			array<int, 2> d={-subtree[heavy], heavy};
			mpp[parent[node]].insert(d);
			parent[heavy]=parent[node];
			parent[node]=heavy;
		}
	}
	return 0;
}