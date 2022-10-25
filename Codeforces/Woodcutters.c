#include<stdio.h>
#include<string.h>
int T[100500][2];
int x[100500];
int h[100500];
int max(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}
int treecount(int n,int state){
	if(n==1){
		return 1;
	}
	else if(T[n][state]!=-1){
		return T[n][state];
	}
	else{
		if(state==1){
			if(x[n-1]+h[n-1]<x[n]){
				T[n][state]=  1 + treecount(n-1,1);
				return T[n][state];
			}
			else if(x[n-2]<x[n-1]-h[n-1]){
				T[n][state]=  max(1 + treecount(n-1,0),treecount(n-1,1));
				return T[n][state];
			}
			else{
				T[n][state]=  treecount(n-1,1);
				return T[n][state];
			}
		}
		else{
			if(x[n-1]+h[n-1]<x[n]-h[n]){
				T[n][state]= 1 + treecount(n-1,1);
				return T[n][state];
			}
			else if(x[n-2]<x[n-1]-h[n-1]){
				T[n][state]=  max(1 + treecount(n-1,0),treecount(n-1,1));
				return T[n][state];
			}
			else{
				T[n][state]=  treecount(n-1,1);
				return T[n][state];
			}
		}
	}
}
int main(){
	int n;
	memset(T,-1,sizeof(T));
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&x[i],&h[i]);
	}
	if(n==1){
		printf("1");
	}
	else{
		printf("%d",1+treecount(n-1,1));
	}
	//state of (n-1)th depend where nth tree fall
	//fall to the left==0, not-fall or fall to the right==1
	
	return 0;
}