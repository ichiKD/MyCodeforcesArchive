#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int max_count=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int brr[n];
	for(int i=0;i<n;i++){
		brr[i]=0;
	}
	int control=0;
	int b=0;
	for(int i=0;i<n;i++){
		control=0;
		for(int j=0;j<=b;j++){
			if(brr[j]==arr[i]){
				control=1;
				break;
			}
		}
		if(control==0){
			brr[b]=arr[i];
			b=b+1;
		}
	}
	int crr[b];
	for(int i=0;i<b;i++){
		crr[i]=0;
	}
	for(int i=0;i<b;i++){
		for(int j=0;j<n;j++){
			if(brr[i]==arr[j]){
				crr[i]=crr[i]+1;
			}
		}
	}
	int max=1;
	for(int i=0;i<b;i++){
		if(max<crr[i]){
			max=crr[i];
		}
	}
	printf("%d",max);
	return 0;
}