#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n,check;
	long long int arr[200500],cdf[200500];
	long long int sum;
	while(testcases--){
		scanf("%d",&n);
		sum=0;
		check=1;
		for(int i=0;i<n;i++){
			scanf("%lld",&arr[i]);
			sum+=arr[i];
		}
		for(int i=n-1;1<=i;i--){
			if(arr[i]==0){
				--n;
			}
			else{
				break;
			}
		}
		if(sum!=0){
			check=0;
		}
		if(arr[0]<0){
			check=0;
		}
		if(arr[n-1]>0){
			check=0;
		}
		cdf[0]=arr[0];
		for(int i=1;i<n;i++){
			cdf[i]=cdf[i-1]+arr[i];
		}
		for(int i=1;i<n-1;i++){
			if(cdf[i]>0){}
			else{
				check=0;
				break;
			}
		}
		if(arr[0]==0){
			if(n==1){
				check=1;
			}
			else if(n==2&&arr[1]==0){
				check=1;
			}
			else{
				check=0;
			}
		}
		if(check==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}