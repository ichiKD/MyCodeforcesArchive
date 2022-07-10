#include<stdio.h>
int min(int a,int b){
	if(a>b)
		return b;
	else
		return a;
}
int main(){
	int q;
	int c,m,x;
	int sum, ans;
	scanf("%d",&q);
	while(q--){
		scanf("%d%d%d",&c,&m,&x);
		sum=c+m+x;
		ans=min(c,m);
		ans=min(sum/3,ans);
		printf("%d\n",ans);
	}
	return 0;
}