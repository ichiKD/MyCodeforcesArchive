#include<stdio.h>
int main(){
	int testcases;
	int n;
	int a[100500], b[100500];
	int c[100500][2]={0};
	int tar, end;
	scanf("%d",&testcases);
	while(testcases--){
		// memset(c, 0, sizeof(c));
		// above memset gets done on the last for loop 
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		b[0]=0;
		for(int i=1;i<n;i++){
			if(a[i-1]<a[i]){
				b[i]=0;
			}
			else{
				b[i]=a[i-1]-a[i];
			}
		}
		for(int i=0;i<n;i++){
			if(b[i]!=0){
				if(c[b[i]-1][1]==0){
					c[b[i]-1][1]=1;
					c[b[i]-1][0]=i+1;
				}
				else{
					c[b[i]-1][1]++;
					tar=b[i]-1;
					tar+=c[b[i]-1][1]-1;
					while(c[tar][1]!=0){
						c[tar][1]++;
						tar+=c[tar][1]-1;
					}
					c[tar][1]=1;
					c[tar][0]=i+1;
				}
			} 
		}
		for(int i=0;i<n;i++){
			if(c[i][0]==0){
				printf("1 ");
			}
			else{
				printf("%d ", c[i][0]);
				c[i][0]=c[i][1]=0;
			}
		}
		printf("\n");
	}
	return 0;
}