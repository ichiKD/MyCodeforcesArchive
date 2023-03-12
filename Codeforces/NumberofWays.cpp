#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	fastIO;
	int n;
	long long int sum=0, average, temp, ans=0;
	long long int a[500500];
	long long int pmf[500500], count[500500];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%3!=0){
		cout<<"0";
	}
	else{
		average=sum/3;
		pmf[n-1]=a[n-1];
		for(int i=n-2;0<=i;i--){
			pmf[i]=pmf[i+1]+a[i];
		}
		count[n+1]=count[n]=0;
		for(int i=n-1;0<=i;i--){
			if(pmf[i]==average){
				count[i]=count[i+1]+1;
			}
			else{
				count[i]=count[i+1];
			}
		}
		temp=0;
		for(int i=0;i<n-2;i++){
			temp+=a[i];
			if(temp==average){
				ans+=count[i+2];
			}
		}
		cout<<ans;
	}
	return 0;
}