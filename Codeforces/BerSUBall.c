#include<stdio.h>
#include <stdlib.h>
int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}
int main(){
	int n;
	scanf("%d",&n);
	int boys[n];
	for(int i=0;i<n;i++){
		scanf("%d",&boys[i]);
	}
	int m;
	scanf("%d",&m);
	int girls[m];
	for(int i=0;i<m;i++){
		scanf("%d",&girls[i]);
	}
	qsort(boys, n, sizeof(int), comparator);
	qsort(girls, m, sizeof(int), comparator);
	int count=0;
	for(int i=0,x=0,a=0;i<n&&x<m;){
		a=boys[i]-girls[x];
		if(a==0||a==1||a==-1){
			count++;
			i++;
			x++;
		}
		else if(boys[i]>girls[x]){
			x++;
		}
		else{
			i++;
		}
	}
	printf("%d",count);
	return 0;
}