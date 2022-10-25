#include <stdio.h>
#include <math.h>

int main(){
	long long int r, x1, y1, x2, y2, ans;
	double temp, distance;
	scanf("%lld%lld%lld%lld%lld", &r, &x1, &y1, &x2, &y2);
	ans=sqrt((x2-x1)*(x2-x1)+ (y2-y1)*(y2-y1))/(2*r);
	if((ans*2*r)*(ans*2*r)< (x2-x1)*(x2-x1)+ (y2-y1)*(y2-y1)){
		ans+=1;
	}
	printf("%lld", ans);
	return 0;
}