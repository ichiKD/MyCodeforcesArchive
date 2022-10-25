#include<stdio.h>
int main(){
	int testcases;
	int n;
	long long int a[200500],b[200500];
	long long int ans;
	scanf("%d",&testcases);
	while(testcases--){
		ans=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		if(a[0]<1){
			b[0]=1;
		}
		else{
			b[0]=0;
		}
		for(int i=1;i<n;i++){
			if(a[i]<i+1){
				b[i]=b[i-1]+1;
			}
			else{
				b[i]=b[i-1];
			}
		}
		for(int i=n-1;0<i;i--){
			if(a[i]<2){
				ans=ans;
			}
			else if(a[i]<i+1){
				ans+=b[a[i]-2];
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}