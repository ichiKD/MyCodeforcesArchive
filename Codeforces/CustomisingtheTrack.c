#include<stdio.h>
int main(){
	long long int testcases;
	scanf("%lld",&testcases);
	long long int arr[testcases];
	long long int a;
	long long int sum[testcases];
	long long int rem[testcases];
	for(int i=0;i<testcases;i++){
		scanf("%lld",&arr[i]);
		sum[i]=0;
		for(int j=0;j<arr[i];j++){
			scanf("%lld",&a);
			sum[i]+=a;
		}
		rem[i]=sum[i]%arr[i];
	}
	for(int i=0;i<testcases;i++){
		printf("%lld\n",rem[i]*(arr[i]-rem[i]));
	}
	return 0;
}