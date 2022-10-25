#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int testcases;
	long long int b1,b2;
	long long int n, k;
	int a[100500];
	memset(a, 0, sizeof(a));
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%lld%lld",&n,&k);
		k-=1;
		b1=(1+sqrt(1+8*k))/2;
		b2=k-(b1*(b1-1))/2;
		a[n-1-b1]=1;
		a[n-1-b2]=1;
		for(int i=0;i<n;i++){
			printf("%c",a[i]+97);
		}
		printf("\n");
		a[n-1-b1]=0;
		a[n-1-b2]=0;
	}
	return 0;
}