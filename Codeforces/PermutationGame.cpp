#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	fastIO;
	int testcases;
	int n;
	int x, y, overlap;
	int a[500500];
	cin>>testcases;
	while(testcases--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		x=0;
		for(int i=0;i<n;i++){
			if(a[i]!=i+1){
				x++;
			}
		}
		y=0;
		for(int i=0;i<n;i++){
			if(a[i]!=n-i){
				y++;
			}
		}
		overlap=0;
		for(int i=0;i<n;i++){
			if(a[i]!=n-i&&a[i]!=i+1){
				overlap++;
			}
		}
		/* DEBUG
		cout<<x<<"   "<<y<<"   "<<overlap<<"\n";
		*/
		if(y>=x+overlap){
			cout<<"First\n";
		}
		else if(x>y+overlap){
			cout<<"Second\n";
		}
		else{
			cout<<"Tie\n";
		}
	}
	return 0;
}