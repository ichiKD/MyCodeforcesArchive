#include<stdio.h>
int main(){
	int n;
	long long int a[201][201];
	long long int sum, min;
	scanf("%d", &n);
	sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%lld", &a[i][j]);
			sum+=a[i][j];
		}
	}
	min=a[0][n-1];
	for(int i=0;i<n;i++){
		if(min>a[i][n-1-i]){
			min=a[i][n-1-i];
		}
	}
	printf("%lld", sum-min);
	return 0;
}