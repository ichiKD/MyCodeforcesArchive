#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	long long int a,b,x,y,n;
	long long int c,d;
	long long int ans[20400];
	for(int i=0;i<testcases;i++){
		scanf("%lld%lld%lld%lld%lld",&a,&b,&x,&y,&n);
		if(a+b-x-y<=n){
			ans[i]=x*y;
		}
		else{
			if(b-y<=n){
				//n=n+y-b;
				//b=y;
				//a=a-n;
				c=(a+b-y-n)*y;
			}
			else{
				//b=b-n;
				c=a*(b-n);
			}
			if(a-x<=n){
				//n=n+x-a;
				//a=x;
				//b=b-n;
				d=x*(b+a-x-n);
			}
			else{
				//a=a-n;
				d=(a-n)*b;
			}
			if(c>d){
				ans[i]=d;
			}
			else{
				ans[i]=c;
			}
		}
	}
	for(int i=0;i<testcases;i++){
		printf("%lld\n",ans[i]);
	}
	return 0;
}