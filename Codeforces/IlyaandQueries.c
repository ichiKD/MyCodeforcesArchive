#include<stdio.h>
#include<string.h>
int main(){
	int n, m,l,r;
	char string[100024];
	int cdf[100024];
	scanf("%s",string);
	scanf("%d",&m);
	n=strlen(string);
	cdf[0]=0;
	for(int i=1;i<=n;i++){
		if(string[i]==string[i-1]){
			cdf[i]=cdf[i-1]+1;
		}
		else{
			cdf[i]=cdf[i-1];
		}
	}
	for(int i=0;i<m;i++){
		scanf("%d%d",&l,&r);
		printf("%d\n",cdf[r-1]-cdf[l-1]);
	}
	return 0;
}
