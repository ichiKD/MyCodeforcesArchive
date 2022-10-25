#include<stdio.h>
int main(){
	int testcases;
	int n;
	int min1,min2;
	int max1,max2;
	int a[100500];
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		if(a[0]>=a[1]){
			max1=min2=a[0];
			min1=max2=a[1];
		}
		else{
			max1=min2=a[1];
			min1=max2=a[0];
		}
		for(int i=2;i<n;i++){
			if(max1<=a[i]){
				max2=max1;
				max1=a[i];
			}
			else if(max2<a[i]){
				max2=a[i];
			}
		}
		for(int i=2;i<n;i++){
			if(min1>=a[i]){
				min2=min1;
				min1=a[i];
			}
			else if(min2>a[i]){
				min2=a[i];
			}
		}
		printf("%d\n",max1+max2-min1-min2);
	}
	return 0;
}