#include<stdio.h>
int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int main(){
	int testcases;
	long long int n,m;
    long long int t,tr,r;
	long long int sum;
    long long int a[10][11];
    long long int R[10];
    for(int i=0;i<10;i++){
        for(int j=1;j<11;j++){
            a[i][j]=(i*j)%10;
        }
    }
    R[1]=R[3]=R[7]=R[9]=45;
    R[2]=R[4]=R[6]=R[8]=40;
    R[0]=0;
    R[5]=25;
    /*
    for(int i=0;i<10;i++){
        for(int j=1;j<11;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    */
	scanf("%d",&testcases);
	while(testcases--){
        scanf("%lld%lld",&n,&m);
        sum=0;
        t=n/m;
        tr=t%10;
        r=m%10;
        sum=(t/10)*R[r];
        for(int i=1;i<=tr;i++){
            sum+=a[r][i];
        }
        printf("%lld\n",sum);
    }
	return 0;
}