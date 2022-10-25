#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int testcases;
	int n;
	int check;
	int k;
	int low, high;
	int a[100500];
	cin>>testcases;
	while(testcases--){
		unordered_set <int> intset;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		check=1;
		for(int i=n-1;0<i;i--){
			if(a[i-1]>a[i]){
				check=0;
				k=i-1;
				break;
			}
		}
		if(check==0){
			for(int i=0;i<=k;i++){
				intset.insert(a[i]);
			}
			low=k;
			for(int i=k+1;i<n;i++){
				if(intset.count(a[i])){
					high=i;
					for(int j=low+1;j<=high;j++){
						intset.insert(a[j]);
					}
					low=i;
				}
			}
			cout<<intset.size()<<"\n";
		}
		else{
			cout<<"0\n";
		}
		intset.clear();
	}
	return 0;
}




