#include<stdio.h>


int main(){
	long long int n;
	scanf("%lld",&n);
	if(n==1){
		printf("3");
	}
	else{
		printf("%lld",3 + 4*n/3);
	}
	return 0;
}



// below code is valid when we can multicount x
// like 15=8**2-7**2
// and	15=3**2-1**2
// count 15 two times 
/*
long long int n;
int good(long long int m){
	long long int sum=0;
	for(int i=1;i*(i+2)<=m;i++){
		sum+=1+(m-(i+2)*i)/(i*2);
	}
	if(sum>=n){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	long long int low, high, mid;
	scanf("%lld",&n);
	low=2; 						//good(low)=0
	high=100000000;				//good(high)=1
	while(high>low+1){
		mid=(high+low)/2;
		if(good(mid)){
			high=mid;
		}
		else{
			low=mid;
		}
	}
	printf("%lld\n",high);
	return 0;
}
*/