#include<stdio.h>
int main(){
	int testcases;
	int n,check;
	int l,r;
	int a[100500];
	scanf("%d",&testcases);
	while(testcases--){
		check=1;
		scanf("%d%d%d",&n,&l,&r);
		for(int i=1;i<=n;i++){
			a[i]=(r/i)*i;
			if(a[i]<l){
				check=0;
				break;
			}
		}
		if(check){
			printf("YES\n");
			for(int i=1;i<=n;i++) {
				printf("%d ",a[i]);
			}
			printf("\n");
		}
		else{
			printf("NO\n");
		}
	}
}