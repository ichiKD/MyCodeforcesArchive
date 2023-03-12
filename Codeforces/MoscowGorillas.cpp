#include <bits/stdc++.h>
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

using namespace std;


int main(){
	fastIO;
	long long int n;
	long long int ans;
	long long int p1, p2;
	long long int temp1, temp2;
	long long int p[200500], q[200500];
	long long int map_p[200500], map_q[200500];
	cin>>n;
	/*	
	for(int i=0;i<n;i++){
		cin>>p[i];
		p[i]-=1;
	}
	for(int i=0;i<n;i++){
		cin>>q[i];
		q[i]-=1;
	}
	*/
	for(int i=1;i<=n;i++){
		cin>>p[i];
	}
	for(int i=1;i<=n;i++){
		cin>>q[i];
	}
	for(int i=1;i<=n;i++){
		map_p[p[i]]=i;
	}
	for(int i=1;i<=n;i++){
		map_q[q[i]]=i;
	}
	// ans= numberofMEX(1)+numberofMEX(2)+...+numberofMEX(n)+numberofMEX(n+1)
	for(int i=1;i<=n;i++){
		if(p[i]==1){
			p1=i;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		if(q[i]==1){
			p2=i;
			break;
		}
	}
	temp1=p1, temp2=p2;
	p1=min(temp1, temp2);
	p2=max(temp1, temp2);
	ans=(p2-p1-1)*(p2-p1)/2;
	ans+=(n-p2)*(n-p2+1)/2;
	ans+=(p1-1)*(p1)/2;
	for(int i=2;i<=n;i++){
		temp1=min(map_p[i], map_q[i]);
		temp2=max(map_p[i], map_q[i]);
		if(temp2<p1){
			ans+=(n+1-p2)*(p1-temp2);
		}
		else if(temp1>p2){
			ans+=(temp1-p2)*(p1);
		}
		else if(p2<temp2&&p1>temp1){
			ans+=(temp2-p2)*(p1-temp1);
		}
		p1=min(temp1, p1);
		p2=max(temp2, p2);
	}
	ans+=1; //numberofMEX(n+1)
	cout<<ans;
	return 0;
}