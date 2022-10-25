//doesn't work in GCC11
//work in GNU C++20

#include<stdio.h>
#include<math.h>
double c;
int good(double m){
	if(m*m+sqrt(m)>c){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	double low, high, mid;
	scanf("%lf",&c);
	low=0.0;		//good(low)=0
	high=1e6; 		//good(high)=1
	while(high-low>1e-7){
		mid=(high+low)/2;
		if(good(mid)){
			high=mid;
		}
		else{
			low=mid;
		}
	}
	printf("%lf",high);
	return 0;
}