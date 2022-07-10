#include<stdio.h>
#define asize 200500

int maax(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}
int main(){
	int testcases;
	int n;
	int a[asize];
	int mode; //if positive mode=1, if negative mode =0
	int max;
	long long int sum;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);	
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sum=0;
		max=a[0];
		if(a[0]>0){
			mode=1;
		}
		else{
			mode=0;
		}
		for(int i=0;i<n;i++){
			if(mode==1){
				if(a[i]>0){
					max=maax(a[i],max);
				}
				else{
					mode=0;
					sum+=max;
					max=a[i];
				}
			}
			else{
				if(a[i]<0){
					max=maax(a[i],max);
				}
				else{
					mode=1;
					sum+=max;
					max=a[i];
				}
			}
		}
		sum+=max;
		printf("%lld\n",sum);
	}
}