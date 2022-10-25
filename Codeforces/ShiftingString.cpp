#include<bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	int testcases;
	int n;
	char str[1000],st[1000];
	int p[1000], done[1000];
	long long int count, factor, check;
	long long int ans;
	cin>>testcases;
	while(testcases--){
		cin>>n;
		cin>>str;
		ans=1;
		for(int i=0;i<n;i++){
			cin>>p[i];
			p[i]-=1;
			done[i]=0;
		}
		for(int i=0;i<n;i++){
			if(done[i]==0){
				done[i]=1;
				count=1;
				st[0]=str[i];
				for(int j=p[i];j!=i;j=p[j]){
					done[j]=1;
					st[count]=str[j];
					count++;
				}
				factor=count;
				check=0;
				for(int j=1;j<=count/2;j++){
					if(count%j==0){
						check=1;
						for(int k=0;k<count-j;k++){
							if(st[k]==st[k+j]){
								check=1;
							}
							else{
								check=0;
								break;
							}
						}
						if(check){
							factor=j;
						}
					}
					else{
						continue;
					}
					if(check){
						break;
					}
				}
				count=factor;
				ans=count*ans/__gcd(ans,count);
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}