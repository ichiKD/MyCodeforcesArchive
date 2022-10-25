#include<stdio.h>
#include <string.h>
long long int T[4500];
long long rombus(int n){
	if(n==2){
		return 1;
	}
	else if(T[n]!=-1){
		return T[n];
	}
	else{
		T[n]=rombus(n-1)+n/2;;
		return T[n];
	}
}
int main(){
	long long int ans;
	long long int w,h;
	scanf("%lld%lld",&w,&h);
	ans=0;
	memset(T,-1,sizeof(T));
	T[0]=T[1]=0;
	T[2]=1;
	rombus(4100);
	printf("%lld\n",T[w]*T[h]);
	return 0;
}