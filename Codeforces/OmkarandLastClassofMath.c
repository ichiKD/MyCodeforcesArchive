#include<stdio.h>
#include<math.h>
int main(){
	int testcases;
	int n;
	int a,b;
	int temp;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);
		a=1;
		b=n-1;
		temp=sqrt(n);
		for(int i=2;i<=temp;i++){
			if(n%i==0){
				a=n/i;
				b=n-a;
				break;
			}
		}
		printf("%d %d\n",a,b);
	}
	return 0;
}