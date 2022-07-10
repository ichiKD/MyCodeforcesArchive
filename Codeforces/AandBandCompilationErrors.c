#include<stdio.h>
#include <stdlib.h>
int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}
int main(){
	int n;
	scanf("%d",&n);
	int errorcode[n];
	for(int i=0;i<n;i++){
		scanf("%d",&errorcode[i]);
	}
	int errorcode1[n-1];
	for(int i=0;i<n-1;i++){
		scanf("%d",&errorcode1[i]);
	}
	int errorcode2[n-2];
	for(int i=0;i<n-2;i++){
		scanf("%d",&errorcode2[i]);
	}
	qsort(errorcode, n, sizeof(int), comparator);
	qsort(errorcode1, n-1, sizeof(int), comparator);
	qsort(errorcode2, n-2, sizeof(int), comparator);
	int error1=0,error2=0;
	for(int i=0,x=0;i<n;){
		if(errorcode[i]!=errorcode1[x]){
			if(error1==0){error1=errorcode[i];}
			x=x-1;
		}
		i++;
		x++;
	}
	for(int i=0,x=0;i<n-1;){
		if(errorcode1[i]!=errorcode2[x]){
			if(error2==0){error2=errorcode1[i];}
			x=x-1;
		}
		i++;
		x++;
	}
	printf("%d\n%d",error1,error2);
	return 0;
}