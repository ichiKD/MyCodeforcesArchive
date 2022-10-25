#include<stdio.h>int main(){
	int testcases;
	int n,k;
	int count;
	int a[1001];
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d%d",&n,&k);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		count=0;
		for(int i=0;i<k;i++){
			if(a[i]>k){
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}