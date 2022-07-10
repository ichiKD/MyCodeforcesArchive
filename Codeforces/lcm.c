#include<stdio.h>
#include<stdlib.h>
/*int LCMdickballs(int a, int b);
int LCMdickballs(int a, int b)
{
	int gcd=0;
	if(a<=b){
	    for(int i=0;i<=a;i++){
	        if((a%i+b%i)==0)){
	            gcd=i;
	            printf("%d\n",gcd);
	        }
	    }
	}
	else{
	    for(int j=0;j<=b;j++){
	        if((a%j+b%j)==0)){
	            gcd=j;
	            printf("%d\n",gcd);
	        }
	    }
	}
	int c=(a*b)/gcd;
	return c;
}*/



int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b){
	return a*b /gcd(a, b);
}



int main (){
	int x,y,z;
	scanf("%d%d",&x,&y);
	printf("%d %d",x,y);
	z=lcm(x,y);
	printf("%d",z);
	return 0;
}