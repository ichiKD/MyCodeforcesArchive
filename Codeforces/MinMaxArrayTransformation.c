#include<stdio.h>
#define SIZE 200500
int main(){
	int testcases;
	int n;
	int a[SIZE], b[SIZE];
	int dmin[SIZE],dmax[SIZE];
	int low,high;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		// dmin[i]
		low=0;
		high=0;
		while(high<n){
			if(b[low]<a[high]){
				low++;
			}
			else{
				dmin[high]=b[low]-a[high];
				high++;
			}
		}
		// dmax[i]
		for(int i=0;i<n;i){
			high=n;
			for(int j=i+1;j<n;j++){
				if(a[j]>b[j-1]){
					high=j;
					break;
				}
			}
			for(int j=i;j<high;j++){
				dmax[j]=b[high-1]-a[j];
			}
			i=high;
		}
		for(int i=0;i<n;i++){
			printf("%d ",dmin[i]);
		}
		printf("\n");
		for(int i=0;i<n;i++){
			printf("%d ",dmax[i]);
		}
		printf("\n");
	}
	return 0;
}
