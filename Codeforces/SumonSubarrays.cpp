#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	fastIO;
	int testcases;
	int n, k;
	int a[50];
	cin>> testcases;
	while(testcases--){
		cin>> n>> k;
		for(int i=0; i<n; i++){
			if(k==0){
				for(int j=i; j<n; j++){
					a[j]=-1;
				}
				break;
			}
			else if(k>=n-i){
				a[i]=1000;
				k=k-(n-i);
			}
			else{
				a[i]=k;
				for(int j=i+1; j<i+k; j++){
					a[j]=-1;
				}
				for(int j=i+k; j<n; j++){
					a[j]=-2;
				}
				break;
			}
		}
		for(int i=0; i<n; i++){
			cout<<a[i] <<" ";
		}
		cout<< "\n";
	}
	return 0;
}