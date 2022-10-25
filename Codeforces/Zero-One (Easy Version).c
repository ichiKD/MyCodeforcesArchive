#include<stdio.h>
long long int min(long long int a,long long  int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int testcases;
	long long int n, x, y, ans;
	int t;
	int a[3200], b[3200];
	scanf("%d", &testcases);
	while(testcases--){
		ans=0;
		t=0;
		scanf("%lld%lld%lld", &n, &x, &y);
		for(int i=0;i<n;i++){
			scanf("%1d", &a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%1d", &b[i]);
		}
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				t++;
			}
		}
		if(t%2==0){
			if(t==2){
				for(int i=0;i<n;i++){
					if(a[i]!=b[i]){
						if(a[i+1]!=b[i+1]){
							if(n==2||n==3){
								ans=x;
							}
							else{
								ans=min(x, 2*y);
							}
						}
						else{
							ans=y;
						}
						break;
					}
				}
			}
			else{
				ans=y*t/2;
			}
			printf("%lld\n",ans);
		}
		else{
			printf("-1\n");
		}
	}
	return 0;
}