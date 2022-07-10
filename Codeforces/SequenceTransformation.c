#include<stdio.h>
#define block 200400
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n1,n2;
	int ans;
	int a[block],b[block];
	while(testcases--){
		n2=1;
		scanf("%d",&n1);
		scanf("%d",&a[0]);
		for(int i=1,j=1;i<n1;i++) {
			scanf("%d",&a[i]);
			if(a[i]!=a[i-1]){
				a[j]=a[i];
				j++;
				n2=j;
			}
		}
		for(int i=0;i<n1+1;i++)	b[i]=0;
		for(int i=0;i<n2;i++) b[a[i]]+=1;
		b[a[0]]--;
		b[a[n2-1]]--;
		ans=n1;
		for(int i=0;i<n2;i++){
			if(ans>b[a[i]]) ans=b[a[i]];
		}
		if(n2==1) printf("0\n");
		else printf("%d\n",ans+1);
	}
	return 0;
}