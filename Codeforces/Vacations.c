#include<stdio.h>
#include<string.h>
int a[120];
int T[120][3];
int max(int a, int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int work(int n, int mode){
	if(n==0){
		return 0;
	}
	else if(T[n][mode]!=-1){
		return T[n][mode];
	}
	else if(a[n]==0||mode==a[n]){
		T[n][mode]= work(n-1, 0);
		return T[n][mode];
	}
	else if(a[n]==1||a[n]==2){
		T[n][mode]= 1 + work(n-1, a[n]);
		return T[n][mode];
	}
	else if(mode==0){
		T[n][mode]= 1 + max(work(n-1, 1) , work(n-1, 2));
		return T[n][mode];
	}
	else if(mode==1){
		T[n][mode]= 1 + work(n-1, 2);
		return T[n][mode];
	}
	else{
		T[n][mode]= 1 + work(n-1, 1);
		return T[n][mode];
	}
}
int main(){
	int n;
	int ans;
	memset(T, -1, sizeof(T));
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i+1]);
	}
	ans=work(n,0);
	printf("%d",n-ans);
	return 0;
}