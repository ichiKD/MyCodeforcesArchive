#include<stdio.h>
long long int T1[100500];
long long int T2[100500];

int main(){
	int n,m;
	int a[100500],b[100500];
	long long int c[100500];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%lld",&c[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d%d",&a[i],&b[i]);
		a[i]--;
		b[i]--;
	}
	T1[0]=0;
	for(int i=1;i<n;i++){
		if(c[i]<c[i-1]){
			T1[i]=T1[i-1]+c[i-1]-c[i];
		}
		else{
			T1[i]=T1[i-1];
		}
	}
	T2[n-1]=0;
	for(int i=n-2;0<=i;i--){
		if(c[i+1]<c[i]){
			T2[i]=T2[i+1];
		}
		else{
			T2[i]=T2[i+1]+c[i+1]-c[i];
		}
	}
	for(int i=0;i<m;i++){
		if(a[i]<b[i]){
			printf("%lld\n",T1[b[i]]-T1[a[i]]);
		}
		else{
			printf("%lld\n",T2[b[i]]-T2[a[i]]);
		}
	}
	return 0;
}