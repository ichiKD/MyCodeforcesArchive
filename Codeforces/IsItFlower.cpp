#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	fastIO;
	int testcases;
	int n, m, k;
	int check1, check2, IS_IN_INNER_LOOP;
	vector<int> adj[300500];
	vector<int> inner;
	cin>> testcases;
	while(testcases--){
		cin>> n>> m;
		for(int i=0; i<n; i++){
			adj[i].clear();
		}
		inner.clear();
		int v, u;
		for(int i=0; i<m; i++){
			cin>> v>> u;
			v--;
			u--;
			adj[v].push_back(u);
			adj[u].push_back(v);
		}
		check1=1;
		check2=1;
		k=sqrtl(n);
		if(k*k!=n||k*(k+1)!=m||n<9){
			cout<< "NO\n";
			continue;
			// check1=0;
		}
		if(adj[0].size()==4){
			IS_IN_INNER_LOOP=1;
		}
		else{
			IS_IN_INNER_LOOP=0;
		}
		if(IS_IN_INNER_LOOP){
			int firstnode;
			int lastnode, currentnode;
			firstnode=0;
			currentnode=0;
			lastnode=2*n;
			inner.push_back(firstnode);
			for(int i=0; i<k; i++){
				check2=0;
				for(int j=0; j<4; j++){
					if(adj[currentnode][j]!=lastnode){
						if(adj[adj[currentnode][j]].size()==4){
							inner.push_back(adj[currentnode][j]);
							lastnode=currentnode;
							currentnode=adj[currentnode][j];
							check2=1;
							break;
						}
					}
				}
				if(check2==0){
					check1=0;
					break;
				}
			}
			if(inner.size()==k+1){
				if(inner[0]!=inner[k]){
					check1=0;
				}
			}
			else{
				check1=0;
			}
		}
		else{
			int firstnode;
			int currentnode, lastnode;
			int innernode;
			currentnode=0;
			lastnode=2*n;
			innernode=2*n;
			for(int i=0; i<k&&innernode==2*n; i++){
				if(adj[currentnode].size()!=2){
					check1=0;
					break;
				}
				for(int j=0; j<2; j++){
					if(adj[currentnode][j]!=lastnode){
						if(adj[adj[currentnode][j]].size()==4){
							innernode=adj[currentnode][j];
						}
						lastnode=currentnode;
						currentnode=adj[currentnode][j];
						break;
					}
				}
			}
			
			// cout<<"*******INNERNODE*******\n";
			// cout<<innernode<<"\n";
			
			firstnode=innernode;
			currentnode=innernode;
			lastnode=2*n;
			inner.push_back(firstnode);
			for(int i=0; i<k; i++){
				check2=0;
				if(adj[currentnode].size()!=4){
					check1=0;
					break;
				}
				for(int j=0; j<4; j++){
					if(adj[currentnode][j]!=lastnode){
						if(adj[adj[currentnode][j]].size()==4){
							inner.push_back(adj[currentnode][j]);
							lastnode=currentnode;
							currentnode=adj[currentnode][j];
							check2=1;
							break;
						}
					}
				}
				if(check2==0){
					check1=0;
				}
			}
			if(inner.size()==k+1){
				if(inner[0]!=inner[k]){
					check1=0;
				}
			}
			else{
				check1=0;
			}
		}
		set<int> intset;
		intset.clear();
		for(int node: inner){
			intset.insert(node);
		}
		if(intset.size()!=k){
			check1=0;
		}
		int start;
		int last, current;
		for(int i=0; i<k&&inner.size()==k+1; i++){
			start=inner[i];
			last=2*n;
			current=inner[i];
			if(adj[current].size()!=4){
				check1=0;
				break;
			}
			for(int j=0; j<4; j++){
				if(adj[adj[current][j]].size()==2){
					last=current;
					current=adj[current][j];
					break;
				}
			}
			for(int L=0; L<k-1; L++){
				check2=0;
				if(adj[current].size()==4&&L==k-2){
					break;
				}
				else if(adj[current].size()!=2){
					break;
				}
				for(int j=0; j<2; j++){
					if(adj[current][j]!=last){
						last=current;
						current=adj[current][j];
						check2=1;
						break;
					}
				}
				if(check2==0){
					check1=0;
				}
			}
			if(start!=current||check2==0){
				check1=0;
			}
		}
		
		if(check1){
			cout<< "YES\n";
		}
		else{
			cout<< "NO\n";
		}
	}
	return 0;
}









/*
n=k+(k-1)*k
n=k*k
m=k*k+k
m=k*(k+1)
*/