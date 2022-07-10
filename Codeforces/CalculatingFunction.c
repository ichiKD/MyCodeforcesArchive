#include<stdio.h>
int main(){
	long long int n;
	scanf("%lld",&n);
	if(n%2==0){
		printf("%lld",n/2);
	}
	else{
		printf("%lld",-(n+1)/2);
	}
	return 0;
}


/*
f(n)=f(n-1)+((-1)**n))n
seems like a agp
S=-1+2-3+4.....((-1)**n))n
T=((-1)**n))n

S=-1+2-3+4.....+T
-S=-0+1-2+3-4.....+T[n-1]-T

2S=-1+(2-1)+(-3+2)+(4-3)....(T[n]+T[n-1]) +T
2S=-1+(1)+(-1)+(1)....(T[n] +T[n-1]) +T
     1    2 3   4         n  
T[n] +T[n-1]=(-1)**(n)
S=n/2 if n is even
S=-(n+1)/2
*/




/*
#include<stdio.h>
int function(long long int num){
	if (num%2==0){
		return num;
	}
	else{
		return -num;
	}
}

int main(){
	long long int n;
	scanf("%lld",&n);
	long long int S=0;
	for(int j=0;j<=n;j++){
		S=S+function(j);
	}
	printf("%lld",S);
}
*/