#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int temp=0;
	int shop[100500]={0}, cmf[100500]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		shop[temp]=shop[temp]+1;
	}
	int q;
	scanf("%d",&q);
	for(int i=1;i<100499;i++){
		cmf[i]=cmf[i-1]+shop[i];
	}
	int m,ans[100500];
	for(int i=0;i<q;i++){
		scanf("%d",&m);
		if(m>100000){
			ans[i]=n;
		}
		else{
			ans[i]=cmf[m];
		}
	}
	for(int i=0;i<q;i++){
		printf("%d\n",ans[i]);
	}
	return 0;
}