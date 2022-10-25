#include<stdio.h>
int main(){
	int testcases;
	int n;
	int q,r;
	int ans;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);
		q=n/6;
		r=n%6;
		ans=q*16;
		if(n>6){
			if(r==0){
				ans+=0;
			}
			else if(r==1){
				ans+=1;
			}
			else if(r==2){
				ans+=4;
			}
			else if(r==3){
				ans+=7;
			}
			else if(r==4){
				ans+=10;
			}
			else{
				ans+=11;
			}
		}
		else{
			if(n==1){
				ans=1;
			}
			else if(n==2){
				ans=4;
			}
			else if(n==3){
				ans=7;
			}
			else if(n==4){
				ans=10;
			}
			else if(n==5){
				ans=11;
			}
			else{
				ans=16;
			}
		}
		printf("%d\n",ans);
	}
}