#include<stdio.h>
int main(){
	int testcases,n;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);
		if(n<15) {
			if(n<4) printf("-1\n");
			else if(n==4||n==6||n==9) printf("1\n");
			else if(n==5||n==7||n==11) printf("-1\n");
			else if(n==13||n==10) printf("2\n");
			else printf("%d\n",n/4);
		}
		else if(n%2==0) {
			printf("%d\n",n/4);
		}
		else {
			printf("%d\n",1+(n-9)/4);
		}
	}
	return 0;
}