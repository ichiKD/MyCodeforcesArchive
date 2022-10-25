#include <stdio.h>
int main(){
	int testcases, n;
	int a, b; 	
	// n=11a+111b
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);
		b=n%11;
		a=(n-111*b)/11;
		if(a<0){
			a=0;
		}
		if(n==11*a+111*b){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}