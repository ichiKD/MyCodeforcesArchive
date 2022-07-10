//cost<=n
#include<stdio.h>
int main(){
	int testcases;
	int n;
	int a[200500],b[200500];
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++) b[i]=1;
		int t=1;
		for(int i=1,j=1;i<=n;i++){
			t=i;
			while(t<=n){
				if(b[t]==1){
					a[j]=t;
					b[t]=0;
					j++;
					t=t*2;
				}
				else break;
			}
		}
		printf("2\n");
		for(int i=1;i<=n;i++) printf("%d ",a[i]);
		printf("\n");
	}
	return 0;
}