#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int a[200500];
int set_no_element_same(array<int, 2> a1, array<int, 2> a2){
	if(a1[0]==a2[0]||a1[0]==a2[1]||a1[1]==a2[0]||a1[1]==a2[1]){
		return 0;
	}
	else{
		return 1;
	}
}

int main(){
	fastIO;
    int n, check;
	cin>> n;
	for(int i=0; i<n; i++){
		cin>> a[i];
	}
	map<int, set<array<int, 2> >> m;
	check=0;
	// because 6400*6401/2 > 2,000,000 = 4*500,000 (500,000= 2*max a[i])
	// using Pigeonhole principle if n>6400, there must be some i, j, k, l in [0, 6400]
	// such that a[i]+ a[j]== a[k]+ a[l]
	n=min(n, 6400);
	for(int i=0; i<n&&!check; i++){
		for(int j=0; j<i&&!check; j++){
			if(m[a[i]+ a[j]].size()==0){
				m[a[i]+ a[j]].insert({j, i});
			}
			else{
				array<int, 2> arr={j, i};
				array<int, 2> brr=*(m[a[i]+ a[j]].begin());
				if(set_no_element_same(arr ,brr)){
					check=1;
					cout<< "YES\n";
					cout<< j+1<< " "<< i+1<< " "<< brr[0]+1<< " "<< brr[1]+1<< "\n";
					break;
				}
			}
		}
	}
	if(check==0){
		cout<< "NO\n";
	}
	return 0;
}