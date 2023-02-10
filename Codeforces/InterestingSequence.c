#include<stdio.h>
#include<math.h>
int main(){
	int testcases;
	int check1, check2;
	long long int n, n2, x, ans, temp;
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%lld%lld", &n, &x);
		if((n|x)>n){
			printf("-1\n");
		}
		else{
			check1=0;
			if(n==x){
				ans=n;
				printf("%lld\n", ans);
				continue;
			}
			if(x==0){
				// temp=log2(n)+1;
				temp=64 - __builtin_clzll(n);
				ans=1LL<<temp;
				printf("%lld\n", ans);
				continue;
			}
			n2=n;
			for(int i=0;i<64&&(!check1);i++){
				if(n&(1LL<<i)){
					n-=1LL<<i;
					if(n==x){
						check1=1;
						check2=1;
						for(int j=i+1;j<64;j++){
							if((n&(1LL<<j))==0){
								ans=n+(1LL<<j);
								break;
							}
							else{
								check2=0;
								break;
							}
						}
					}
				}
			}
			// temp=log2(n)+1;
			temp=64 - __builtin_clzll(n2);
			temp=1LL<<temp;
			if(check1==0||temp<=ans||check2==0){
				printf("-1\n");
			}
			else{
				printf("%lld\n", ans);
			}
		}
	}
	return 0;
}