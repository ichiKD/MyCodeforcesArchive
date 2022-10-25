#include<stdio.h>
#include <string.h>

int a[100500], b[100500];
long long int T[100500][2];

long long int max(long long int a,long long int b){
	if (a>b){
		return a;
	}
	else{
		return b;
	}
}

long long int knapsack(int n, int mode){
	// mode can be 0 or 1
	if(n==1){
		if(mode==0){
			return a[0];
		}
		else {
			return b[0];
		}
	}
	else if(T[n][mode]!=-1){
		return T[n][mode];
	}
	else{
		if(mode==0){
			T[n][mode]= max(knapsack(n-1, 0),a[n-1]+knapsack(n-1, 1));
			return T[n][mode];
		}
		else {
			T[n][mode]= max(knapsack(n-1, 1),b[n-1]+knapsack(n-1, 0));
			return T[n][mode];
		}
	}
}

int main(){
	
	int n;
	long long int ans=0;
	memset(T,-1,sizeof(T));
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	ans=max(knapsack(n, 0), knapsack(n, 1));
	printf("%lld", ans);
	return 0;
}