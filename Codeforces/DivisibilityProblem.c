#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	long long int a[t],b[t];
	long long int reminder[t];
	for(int i=0;i<t;i++){
		scanf("%lld%lld",&a[i],&b[i]);
		reminder[i]=a[i]%b[i];
	}
	for(int j=0;j<t;j++){
		if(reminder[j]==0){
			printf("%d\n",0);
		}
		else{
			printf("%lld\n",b[j]-reminder[j]);
		}
	}
	return 0;
}