#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	fastIO;
	int testcases;
	int n;
	int a[200500];
	int ans, temp, numofgoing;
	int index;
	cin>>testcases;
	while(testcases--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a, a+n);
		ans=0;
		numofgoing=0;
		temp=0;
		index=n-1;
		for(int i=0;i<n;i++){
			if(a[i]){
				ans=1;
				index=i;
				numofgoing=i;
				break;
			}
		}
		for(int i=index;i<n&&(numofgoing+temp<n);){
			if(a[i]<=numofgoing){
				// ans+=1;
				i++;
				numofgoing++;
			}
			else if(a[i]<=temp+numofgoing){
				numofgoing+=temp+1;
				i++;
				ans++;
				temp=0;
			}
			else{
				i++;
				temp++;
			}
		}
		if(ans){
			cout<<ans<<"\n";
		}
		else{
			cout<<"1\n";
		}
	}
	return 0;
}