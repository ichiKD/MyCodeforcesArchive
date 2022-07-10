#include<stdio.h>
long long int gcd(long long int p,long long int q)
{
    if (q == 0)
        return p;
    return gcd(q, p % q);
}
int main(){
	long long int a, b, x, y;
	scanf("%lld%lld%lld%lld",&a, &b, &x, &y);
	long long int gcdxy=gcd(x,y);
	x=x/gcdxy;
	y=y/gcdxy;
	double h=b/y, g=a/x;
	if(g>h){
		printf("%lld",b/y);
	}
	else{
		printf("%lld",a/x);
	}
	return 0;
}