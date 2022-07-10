#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int a[testcases],b[testcases],c[testcases];
	for(int i=0;i<testcases;i++){
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]>=b[i]){
			if(b[i]>=(a[i]+b[i])/4){
				c[i]=(a[i]+b[i])/4;
			}
			else{
				c[i]=b[i];
			}
		}
		else{
			if(a[i]>=(a[i]+b[i])/4){
				c[i]=(a[i]+b[i])/4;
			}
			else{
				c[i]=a[i];
			}
		}
	}
	for(int i=0;i<testcases;i++){
		printf("%d\n",c[i]);
	}
	return 0;
}