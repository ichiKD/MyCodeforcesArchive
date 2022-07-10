#include<stdio.h>
#include <stdlib.h>
int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}

int  main(){
	int arr[6];
	int sum=0,sum1,check=0;
	for(int i=0;i<6;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	qsort(arr, 6, sizeof(int), comparator);
	if(sum%2==0){
		for(int i=0;i<6;i++){
			for(int j=i+1;j<6;j++){
				for(int k=j+1;k<6;k++){
					sum1=arr[i]+arr[j]+arr[k];
					if(sum==sum1*2){
						check=1;
					}
				}
			}
		}
	}
	if(check==1){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}