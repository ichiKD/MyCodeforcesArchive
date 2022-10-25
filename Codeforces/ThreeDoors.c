#include<stdio.h>
int main(){
	int testcases;
	int x;
	int a[4];
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&x);
		scanf("%d%d%d",&a[0],&a[1],&a[2]);
		if(a[x-1]!=0&&a[a[x-1]-1]!=0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}