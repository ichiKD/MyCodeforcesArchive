#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	double x,y;
	double area;
	printf("? %d\n", 2*n+1);
	printf("0.000000 0.000000\n");
	for(int i=1;i<=n;i++){
		printf("%f %f\n",(double)i,(double)m);
		printf("%f %f\n",(double)i,(double)0);
	}
	fflush(stdout);
	scanf("%lf", &area);
	y=m*(1-area)-0.5000000;
	printf("? %d\n", 2*m+1);
	printf("0.000000 0.000000\n");
	for(int i=1;i<=m;i++){
		printf("%f %f\n",(double)n,(double)i);
		printf("%f %f\n",(double)0,(double)i);
	}
	fflush(stdout);
	scanf("%lf", &area);
	x=n*(1-area)-0.5000000;
    printf("! %2.6lf %2.6lf\n", x,y);
    fflush(stdout);
}