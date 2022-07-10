#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int a[2][2];
	while(testcases--){
		scanf("%d%d%d%d",&a[0][0],&a[0][1],&a[1][0],&a[1][1]);
		if(a[0][0]==a[0][1]&&a[0][0]==a[1][0]&&a[0][0]==a[1][1]){
			if(a[0][0]==0) printf("0\n");
			else printf("2\n");
		}
		else printf("1\n");
	}
	return 0;
}