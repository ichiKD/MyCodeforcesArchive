#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main() {
    fastIO;
	int n, temp;
	int split=0; // combine = n+ split -1
	cin>> n;
	vector<int> k;
	vector<vector<int>> b(n);
	set<int> intset;
	for(int i=0; i<n; i++){
		cin>> temp;
		k.push_back(temp);
		for(int j=0; j<k[i]; j++){
			cin>> temp;
			b[i].push_back(temp);
			intset.insert(temp);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=1; j<k[i]; j++){
			if(b[i][j-1]>b[i][j]){
				++split;
			}
			else if(b[i][j]!=b[i][j-1]){
				temp=*(++intset.find(b[i][j-1]));
				if(b[i][j]!=temp){
					++split;
				}
			}
			intset.insert(temp);
		}
	}
	cout<< split<< " "<< n+split-1;
	return 0;
}