#include<stdio.h>
int main(){
	int n, k;
	int arr[100500];
	int temp, check;
	int low ,high, mid;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<k;i++){
		scanf("%d",&temp);
		check=0;
		low=0, high=n-1;
		while(low<=high){
			mid=(low+high)/2;
			if(arr[mid]==temp){
				check=1;
				break;
			}
			else if(arr[mid]<temp){
				low=mid+1;
			}
			else if(arr[mid]>temp){
				high=mid-1;
			}
		}
		if(check){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}