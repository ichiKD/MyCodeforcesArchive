#include<stdio.h>
int main(){
	int n, k;
	int arr[100500];
	int temp;
	int low ,high, mid;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<k;i++){
		scanf("%d",&temp);
		low=-1, high=n;
		while(low+1<high){
			mid=(low+high)/2;
			if(arr[mid]<temp){
				low=mid;
			}
			else if(arr[mid]>=temp){
				high=mid;
			}
		}
		printf("%d\n",high+1);
	}
	return 0;
}