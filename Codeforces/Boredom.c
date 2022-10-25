#include<stdio.h>
#include<string.h>
#define SIZE 120000
long long int max(long long int a,long long int b){
	if(a>b)
		return a;
	else 
		return b;
}
long long int T[SIZE];

long long int game(long long int ar[],int n){
	if(n==1||n==0){
		return n*ar[n];
	}
	else if(T[n]!=-1){
		return T[n];
	}
	else if(ar[n+1]==0&&ar[n-1]==0){
		T[n]=n*ar[n]+game(ar,n-2);
		return T[n];
	}
	else {
		T[n]= max(n*ar[n]+ game(ar,n-2), game(ar,n-1));
		return T[n];
	}
}

/*
long long int game(int ar[],int n){
	if(n==1||n==0){
		return n*ar[n];
	}
	else if(ar[n+1]==0&&ar[n-1]==0){
		return n*ar[n]+game(ar,n-2);
	}
	else {
		return max( n*ar[n] +game(ar,n-2) , game(ar,n-1) );
	}
}
*/


int main(){
	int n;
	long long int a[SIZE];
	long long int b[SIZE];
	long long int sum=0;
	scanf("%d",&n);
	memset(b,0,sizeof(b));
	memset(T,-1,sizeof(T));
	
	/*
	for(int i=0;i<SIZE;i++){
		//T[i]=-1;
		printf("%d: %lld ",i,T[i]);
	}*/
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	sum=game(b,SIZE-300);
	printf("%lld",sum);
}