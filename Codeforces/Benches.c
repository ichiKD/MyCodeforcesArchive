#include<stdio.h>
int main(){
	int n, m;
	int arr[120];
	int dmin, dmax;
	int t, r, temp, number , sum;
	scanf("%d%d",&n,&m);
	dmax=0;
	sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(dmax<arr[i]){
			dmax=arr[i];
		}
		sum+=arr[i];
	}
	t=m/n;
	r=m%n;
	number=dmax*n;
	if(number-sum>m){
		printf("%d %d",dmax,dmax+m); //dmin=dmax,	dmax=dmax+m;
	}
	else{
		temp=m+sum-number;
		t=temp/n;
		r=temp%n;
		if(r==0){
			printf("%d %d",dmax+t,dmax+m);
		}
		else{
			printf("%d %d",dmax+t+1,dmax+m);
		}
	}
	return 0;
}