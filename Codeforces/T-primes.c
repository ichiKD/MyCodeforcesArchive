#include<stdio.h>
#include<string.h>
#include<math.h>

#define SIZE 5000
/*
#define SIZE 1005000
*/

long long int sieve[SIZE+1];
void primefinder(){
	for(long long int i=2;i<SIZE;i++){
		if(sieve[i]==0){
			for(long long int j=i*i;j<SIZE;j+=i){
				sieve[j]=1;
			}
		}
	}
}
int main(){
	int testcases;
	scanf("%d",&testcases);
	long long int n;
	long long int temp;
	memset(sieve,0,sizeof(long long int)*(SIZE+1));
	primefinder();
	while(testcases--){
		scanf("%lld",&n);
		temp=sqrt(n);
		if(n>2&&!sieve[temp]&&temp*temp==n){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}