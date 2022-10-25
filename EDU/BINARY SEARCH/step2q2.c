//doesn't work in GNU C11
//work in GNU C++20 
#include<stdio.h>
int n, k;
int arr[100500];
int good(double mid){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=(int)(arr[i]/mid);
	}
	return sum>=k;
}
int main(){
	double low ,high, mid;
	scanf("%d%d",&n, &k);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	low=0.0;			//good(low)=1
	high=1e7+500;		//good(high)=0
	
	while(high-low>1e-6){
		mid=(low+high)/2;
		if(good(mid)){
			low=mid;
		}
		else{
			high=mid;
		}
	}
	printf("%lf",low);
	return 0;
}