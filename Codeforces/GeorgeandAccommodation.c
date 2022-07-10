#include<stdio.h>
int main(){
	int n, count=0;
	int p,q;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&p,&q);
		if(p+1<q){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}