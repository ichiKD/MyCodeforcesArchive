#include<stdio.h>
int main(){
	long long int n[102000],k[102000];
	long long int testcases;
	scanf("%lld",&testcases);
	for(int i=0;i<testcases;i++){
		scanf("%lld%lld",&n[i],&k[i]);
	}
	for(int i=0;i<testcases;i++){
		if(n[i]>=k[i]*k[i]&&(n[i]-k[i]*k[i])%2==0){printf("YES\n");}
		else{printf("NO\n");}
	}
	return 0;
}