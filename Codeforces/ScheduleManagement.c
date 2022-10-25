#include<stdio.h>
int main(){
	int testcases;
	int n,m;
	long long int extra,need;
	int low, high,mid;
	scanf("%d",&testcases);
	int a[200500];
	int temp;
	while(testcases--){
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++) a[i]=0;
		for(int i=0;i<m;i++){
			scanf("%d",&temp);
			++a[temp-1];
		}
		low=0;
		high=m+1;
		while(low<high){
			mid=(low+high)/2;
			need=0;
			extra=0;
			for(int i=0;i<n;i++){
				if(a[i]<=mid){
					extra+=(mid-a[i])/2;
				}
				else{
					need+=a[i]-mid;
				}
			}
			if(need<=extra){
				high=mid;
			}
			
			else {
				low=mid+1;
			}
		}
		printf("%d\n",low);
	}
	return 0;
}