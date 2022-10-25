#include <stdio.h>
int main(){
	int n, m;
	int a=0, b=0;
	int temp, diff;
	scanf("%d%d", &n, &m);
	if(m<=n){
		b=n-m;
	}
	else{
		temp=n;
		while(temp<m){
			a++;
			temp=temp*2;
		}
		diff=temp-m;
		for(int i=a;0<=i&&diff;i--){
			if(diff>=(1<<i)){
				b+=diff/(1<<i);
				diff=diff%(1<<i);
			}
		}
	}
	printf("%d", a+b);
	return 0;
}