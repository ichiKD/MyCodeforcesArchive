#include <stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	long long int n, m, ans;
	while(testcases--){
		scanf("%lld%lld",&n,&m);
		ans=m*(m+1)/2;
		ans+=m*(n*(n+1)-2)/2;
		printf("%lld\n",ans);
	}
	return 0;
}