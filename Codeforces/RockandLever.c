#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n;
	int arr[100400];
	int mostSignificantBit[32]={0};
	int sum, t;
	while(testcases--){
		scanf("%d",&n);
		for(int i=0;i<32;i++){
			mostSignificantBit[i]=0;
		}
		t=0;
		for(int i=0;i<n;i++) scanf("%d",&arr[i]);
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
			while(arr[i]!=0){
				arr[i]>>1;
				t++;
				printf("%d",arr[i]);
			}
			mostSignificantBit[t]++;
		}
		sum=0;
		for(int i=0;i<26;i++){
			sum+=mostSignificantBit[i]*mostSignificantBit[i]/2;
		}
		printf("%d\n",sum);
	}
	
	return 0;
}