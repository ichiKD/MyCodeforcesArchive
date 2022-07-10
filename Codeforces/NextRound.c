#include<stdio.h>
#include <stdlib.h>
int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}
int main(){
	int N, k;
	scanf("%d%d", &N, &k);
	int arr[N];
	int numzero=0, num=0;
	for(int i=0;i<N;i++){
		scanf("%d", &arr[i]);
		if(arr[i]==0){
			numzero+=1;
		}
	}
	qsort(arr, N, sizeof(int), comparator);
	for(int i=0;i<N;i++){
		if(arr[i]>=arr[N-k]){
			num+=1;
		}
	}
	if(arr[N-k]==0){printf("%d", num-numzero);}
	else{printf("%d", num);}
	return 0;
}