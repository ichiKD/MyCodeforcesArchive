#include<stdio.h>
int main(){
	int testcases;
	int k, n;
	int max, l;
	int a[200500], p[200500];
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d%d", &n, &k);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		if(n==k){
			max=0;
			for(int i=1;i<n-1;i++){
				if(a[i]>a[i-1]&&a[i]>a[i+1]){
					max++;
				}
			}
			printf("%d %d\n",max+1, 0+1);
		}
		else{
			p[0]=0;
			for(int i=1;i<n-1;i++){
				if(a[i]>a[i-1]&&a[i]>a[i+1]){
					p[i]=1+p[i-1];
				}
				else{
					p[i]=p[i-1];
				}
			}
			p[n-1]=p[n-2];
			l=0;
			k-=2;
			max=p[k-1];
			for(int i=0;i<n-k;i++){
				if(max<p[i+k]-p[i]){
					max=p[i+k]-p[i];
					l=i;
				}
			}
			printf("%d %d\n",max+1, l+1);
		}
	}
	return 0;
}