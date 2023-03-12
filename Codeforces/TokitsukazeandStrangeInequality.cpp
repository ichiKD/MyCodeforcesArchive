#include <bits/stdc++.h>
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

using namespace std;


int main(){
	fastIO;
	int testcases;
	int n;
	long long int ans, temp;
	int a[5020];
	int b[5020][5020];
	cin>>testcases;
	while(testcases--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		//	b[i][j] computes the number of indexes >=j for
		//	which a[i]>a[index]
		for(int i=0;i<n;i++){
			b[i][n]=0;
			for(int j=n-1;i<j;j--){
				if(a[i]>a[j]){
					b[i][j]=b[i][j+1]+1;
				}
				else{
					b[i][j]=b[i][j+1];
				}
			}
		}
		ans=0;
		for(int cc=n-2;2<=cc;cc--){
			temp=0;
			for(int aa=cc-2;0<=aa;aa--){
				temp+=b[aa+1][cc+1];
				if(a[cc]>a[aa]){
					ans+=temp;
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}