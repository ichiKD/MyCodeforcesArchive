#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n;
	char str[200500];
	long long int sum;
	while(testcases--){
		scanf("%d",&n);
		scanf("%s",str);
		sum=n;
		for(int i=1;i<n;i++){
			if(str[i-1]!=str[i]){
				sum+=i;
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}