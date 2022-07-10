#include<stdio.h>
#include <stdlib.h>
int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}

int main(){
	int n;
	scanf("%d",&n);
	int coins[n];
	int sum=0;
	for(int i=0 ; i<n; i++){
		scanf("%d",&coins[i]);
		sum=sum+coins[i];
	}
	qsort(coins, n, sizeof(int), comparator);
	int yourmoney=0, count=0;
	for(int i=0 ; i<n; i++){
		if(2*yourmoney>sum){
			break;
		}
		else{
			count+=1;
			yourmoney+=coins[n-1-i];
		}
	}
	printf("%d", count);
	return 0;
}