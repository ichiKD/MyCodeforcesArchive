#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n;
	int arr[100400];
	long long int mostSignificantBit[40]={0};
	long long int sum;
	while(testcases--){
		scanf("%d",&n);
		for(int i=0;i<32;i++)	mostSignificantBit[i]=0;
		for(int i=0;i<n;i++) scanf("%d",&arr[i]);
		
		for(int j=0;j<32;j++){
			for(int i=0;i<n;i++){
				if(arr[i]>=(1<<j)&&arr[i]<(1<<j+1)) mostSignificantBit[j]++;
			}
		}
		sum=0;
		for(int i=0;i<30;i++){
			sum+=mostSignificantBit[i]*(mostSignificantBit[i]-1)/2;
		}
		printf("%lld\n",sum);
	}
	
	return 0;
}