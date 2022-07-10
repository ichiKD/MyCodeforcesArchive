#include<stdio.h>
#include <stdlib.h>
int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}
int main(){
	int testcases;
	scanf("%d",&testcases);
	int a[10];
	int sum,d;
	for(int i=0;i<testcases;i++){
		scanf("%d%d%d",&a[0],&a[1],&a[2]);
		sum =a[0]+a[1]+a[2];
		qsort(a, 3, sizeof(int), comparator);
		if(sum%9==0&&a[0]*8>=a[1]+a[2]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}