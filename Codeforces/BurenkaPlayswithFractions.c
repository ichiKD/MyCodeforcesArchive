#include<stdio.h>
int main(){
	int testcases;
	long long int a,b,c,d;
	long long int k;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
		if(a*d==b*c){
			printf("0\n");
		}
		else{
			if(a==0||c==0){
				printf("1\n");
			}
			else if(a*d>b*c){
				k=a*d/(b*c);
				if(a*d==b*c*k){
					printf("1\n");
				}
				else{
					printf("2\n");
				}
			}
			else{
				k=b*c/(a*d);
				if(a*d*k==b*c){
					printf("1\n");
				}
				else{
					printf("2\n");
				}
			}
		}
	}
	return 0;
}