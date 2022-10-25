#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}
int T[4][4004];

int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int ribbons(int a[], int w, int n){
	if(w==0||n==0){
		return 0;
	}
	else if(T[n][w]!=-1){
		return T[n][w];
	}
	else if(w<a[0]){
		T[n][w]=-5000;
		return T[n][w];
	}
	else{
		if(a[n-1]<=w){
			T[n][w]=max(1+ribbons(a,w-a[n-1],n),ribbons(a,w,n-1));
            if(T[n][w]==0){
                T[n][w]=-5000;
            }
			return T[n][w];
		}
		else{
			T[n][w]=ribbons(a,w,n-1);
			return T[n][w];
		}
	}
}
int main(){
    int W;
    int a[3];
    scanf("%d%d%d%d",&W,&a[0],&a[1],&a[2]);
    qsort(a, 3, sizeof(int), comparator);
	memset(T,-1,sizeof(T));
	printf("%d",ribbons(a,W,3));
	return 0;
}