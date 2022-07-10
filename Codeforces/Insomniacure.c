#include<stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b){
	return a*b /gcd(a, b);
}
int main(){
	int k,l,m,n,d;
	int onesets,twosets,threesets,foursets;
	scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
	onesets=d/k+d/l+d/m+d/n;
	twosets=d/lcm(k,l)+d/lcm(k,m)+d/lcm(k,n)+d/lcm(l,m)+d/lcm(l,n)+d/lcm(m,n);
	threesets=d/lcm(lcm(k,l),m)+d/lcm(lcm(k,l),n)+d/lcm(lcm(l,m),n)+d/lcm(lcm(k,m),n);
	foursets=d/lcm(lcm(lcm(k,l),m),n);
	printf("%d",onesets-twosets+threesets-foursets);
	return 0;
}